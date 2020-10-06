#include <bits/stdc++.h>
using namespace std;
int arr[26];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int yes = true;
    for(int i = 0; i < 3; i++) {
      string s;
      cin >> s;
      if(i != 2)
      {
        for(char c: s)
          arr[c-'A']++;
      } else {
        for(char c: s)
          arr[c-'A']--;

        for(int j = 0; j < 26; j++) {
          if(arr[j] != 0) {
            yes = false;
            break;
          }
        }
      }
    }
    if(yes)
      cout << "YES";
    else
      cout << "NO";
}

