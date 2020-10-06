#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int wxH = 2e5;
ll arr[wxH];
ll n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++)
      cin >> arr[i];
    sort(arr, arr+n);

    ll maxV = arr[n-1], minV = arr[0];
    ll maxCount = 0, minCount = 0;
    if(maxV != minV) {
      for(int i = 0; i < n-1; i++) {
        if(arr[i] == minV)
          minCount++;
        else
          break;
      }
      for(int i = n-1; i > 0; i--) {
        if(arr[i] == maxV)
          maxCount++;
        else
          break;
      }

      ll count = maxCount * minCount;
      ll maxDiff = maxV - minV;
      cout << maxDiff << ' ' << count;
    } else {
      ll count = n * (n - 1) / 2;
      cout << 0 << ' ' << count;
    }
}
