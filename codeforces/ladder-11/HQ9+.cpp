#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    bool flag = false;
    for(char c: s) {
      if(c == 'H' || c == 'Q' || c == '9') {
        flag = true;
        break;
      }
    }

    if(flag)
      cout << "YES";
    else
      cout << "NO";
}

