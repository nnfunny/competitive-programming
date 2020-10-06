#include <bits/stdc++.h>
using namespace std;

char s[1000];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int m, n;
    cin >> n >> m;

    for(int i =  0; i < n; i++) {
      cin >> s;
      for(int j = 0; j < m; j++) {
        if(s[j] == '.') {
          if((i+j) & 1)
            s[j] = 'W';
          else
            s[j] = 'B';
        }
      }
      cout << s << '\n';
    }
}
