#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int ans = 0;
    int n, m;
    cin >> n >> m;
    for(int a = 0; a <= m; a++) {
      for(int b = 0; b <= n; b++) {
        int n1 = a * a + b;
        int n2 = a + b * b;
        if(n1 == n && n2 == m)
          ans++;
      }
    }
    cout << ans;
}

