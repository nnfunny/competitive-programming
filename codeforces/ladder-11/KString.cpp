#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    int n;
    cin >> n >> s;
    vector<int> v(26, 0);
    for(char c : s)
      v[c-'a']++;

    bool doesExist = true;
    for(int i = 0; i < 26; i++) {
      if(v[i] != 0 && v[i] % n != 0) {
        doesExist = false;
        break;
    }}

    if(doesExist) {
      string ans = "";
      string rep = "";
      for(int i = 0; i < 26; i++) {
          for(int j = 0; v[i] != 0 && j < (v[i] / n); j++) {
            rep += 'a' + i;
          }
      }
      for(int i = 0; i < n; i++)
        ans += rep;
      cout << ans;
    } else 
      cout << -1;
}
