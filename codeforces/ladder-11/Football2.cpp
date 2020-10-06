#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); 

    string s;
    cin >> s;
    int count = 0;
    char prev = s[0];
    bool isDangerous = 0;
    for(char c : s) {
      if(c == prev) {
        count++;
        if(count >= 7) {
          isDangerous = 1;
          break;
        }
       }
      else
        count = 1;
      prev = c;
    }
    if(isDangerous)
      cout << "YES";
    else
      cout << "NO";
}

