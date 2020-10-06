#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n);
    int minV = 0, maxV =0;
    for(int i = 0; i < n; i++) {
      cin >> arr[i];
      if(arr[minV] >= arr[i]) minV = i;
      if(arr[maxV] <= arr[i]) maxV = i;
    }

    for(int i = n - 1; i >= 0; i--) {
      if(arr[minV] == arr[i]) {
        minV = i;
        break;
      }
    }

    for(int i = 0; i < n; i++) {
      if(arr[maxV] == arr[i]) {
        maxV = i;
        break;
      }
    }

    int count = 0;
    for(int i = minV; i < n - 1; i++) {
      swap(arr[i], arr[i+1]);
      count++;
    }

    if(minV > maxV) {
      for(int i = maxV; i > 0 ; i--) {
        swap(arr[i], arr[i-1]);
        count++;
      }
    } else if(minV < maxV) {
      for(int i = maxV-1; i > 0; i--) {
        swap(arr[i], arr[i-1]); 
        count++;
      }
    }

    cout << count;
}

