#include <bits/stdc++.h>
using namespace std;

const int wxH = 15e4+1;
int n, k, arr[wxH];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> k;
    for(int i = 0; i < n; i++)
      cin >> arr[i];

    int sum = 0;
    for(int i = 0; i < k; i++)
      sum += arr[i];
    
    int curr = sum;
    int plank = 0;
    for(int i = k; i < n; i++) {
      curr += arr[i] - arr[i-k];
      if(sum > curr) {
        plank = i;
        sum = curr;
      }
    }
    cout << (plank-k+2 <= 1 ? 1 : plank-k+2);
}
