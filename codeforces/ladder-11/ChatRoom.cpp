#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    string hello = "hello";
    int index = 0;

    int i;
    for(i = 0; i < (int)s.size(); i++) {
      if(s[i] == 'h') {
        index++;
        break;
      }
    }

    for(int j = i+1; j < (int)s.size(); j++) {

      if(s[j] == hello[index]) {
        index++;
      }

      if(index == 5)
        break;
    }

    if(index == 5)
      cout << "YES";
    else
      cout << "NO";
}
