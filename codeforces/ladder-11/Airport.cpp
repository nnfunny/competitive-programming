#include <bits/stdc++.h>
using namespace std;

const int hxW = 1000;
int arr[hxW], maxArr[hxW];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int m, n;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
      cin >> arr[i];
    }

    sort(arr, arr+m);
    int minV = 0, num = arr[0], k = 0;
    for(int i = 0; i < n; i++) {
      minV += num;
      num--;
      if(num == 0)
        num = arr[++k];
    }
    int maxV = 0;
    sort(arr, arr+m, greater<int>());
    while(n--) {
      maxV += arr[0];
      arr[0]--;
      for(int i = 0; i < m - 1; i++) {
        if(arr[i] >= arr[i+1])
          break;
        swap(arr[i], arr[i+1]);
      }
    }
    cout << maxV << ' ' << minV;
}
