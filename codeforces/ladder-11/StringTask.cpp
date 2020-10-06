#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string s;
    cin >> s;
    string ans = "";
    for(int i = 0; i < (int)s.size(); i++) {
      if(s[i] >= 'A' && s[i] <= 'Z') {
        if(s[i] != 'A' && s[i] != 'O' && s[i] != 'Y' && s[i] != 'E' && s[i] != 'U' && s[i] != 'I') {
          ans.append(1u, '.');
          ans += (s[i] + 32);
        }
      } else if(s[i] != 'a' && s[i] != 'o' && s[i] != 'y' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i'){
          ans.append(1u, '.');
          ans += s[i];
      }
    }
    cout << ans;
}

