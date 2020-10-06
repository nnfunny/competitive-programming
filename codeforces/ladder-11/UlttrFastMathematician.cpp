#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string m, n;
    cin >> m >> n;
    string ans = "";

    for(int i = 0; i < int(m.length()); i++) {
      if(m[i] == n[i])
        ans += '0';
      else
        ans += '1';
    }
    cout << ans;
}

