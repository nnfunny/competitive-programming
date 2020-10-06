#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    string ans = "";
    int size = (int)s.size();
    for(int i = size - 1; i >= 0 ; i--) {
      if( i >= 3 && s.substr(i-2,3) == "WUB") {
        i -= 2;
        ans = " " + ans;
      } else 
        ans = s[i] + ans;
    }
    if(ans.substr(0,3) == "WUB")
      ans = ans.substr(3, (int)ans.size() - 3);

    string newAns = "";
    for(int i = 0; i < (int)ans.size(); i++) {
      if( i < (int)ans.size() - 1 && ans[i] == ' ' && ans[i+1] == ' ')
        continue;
      else
        newAns += ans[i];
    }

    for(int i = (int)newAns.size() - 1; i >= 0; i--) {
      if(newAns[i] != ' ')
        break;
      else
        newAns.erase(i, 1);
    }
    cout << newAns;
}

