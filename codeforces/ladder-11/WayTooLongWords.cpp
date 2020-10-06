#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n = 4;
    cin >> n;
    for(int i = 0; i < n; i++) {
      string word;
      cin >> word;
      if(int(word.length()) <= 10)
        cout << word << '\n';
      else {
        string ans = "";
        ans += word[0];
        ans += to_string(int(word.length()) - 2);
        ans += word[int(word.length()) - 1];
        cout << ans << '\n';
      }
    }
}

