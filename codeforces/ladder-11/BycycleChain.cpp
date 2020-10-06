#include <bits/stdc++.h>
using namespace std;
const int hxW = 50;
int a[hxW], b[hxW];
int m, n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> m;
    for(int i = 0; i < m; i++)
      cin >> a[i];
    cin >> n;
    for(int i = 0; i < n; i++)
      cin >> b[i];

    int maxV = INT_MIN;
    int ans = 0;
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        if(b[i] % a[j] == 0) {
          if(b[i] / a[j] > maxV) {
            maxV = b[i] / a[j]; 
            ans = 1;
            break;
          } else if(b[i] / a[j] == maxV) {
            ans++;
            break;
          }
        }
      }
    }
    cout << ans;
}
