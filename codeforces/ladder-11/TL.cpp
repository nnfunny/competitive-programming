#include <bits/stdc++.h>
using namespace std;

int arr_p[100], arr_f[100];
int m, n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;
    int min_v = INT_MAX, max_v = INT_MIN;
    for(int i = 0; i < n; i++) {
      cin >> arr_p[i];
      max_v = max(max_v, arr_p[i]);
    }
    for(int i = 0; i < m; i++) {
      cin >> arr_f[i];
      min_v = min(min_v, arr_f[i]);
    }

    if(min_v <= max_v) {
      cout << -1;
      return 0;
    }

    bool ok = 0;
    int ans;
    for(int i = max_v; i < min_v && !ok; i++) {
      for(int j = 0; j < n; j++) 
        if(arr_p[j] != i && arr_p[j]*2 <= i) {
          ok = 1;
          ans = i;
          break;
        }
    }

    if(ok)
      cout << ans;
    else
      cout << -1;
}
