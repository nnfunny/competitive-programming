#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s1, s2;
    cin >> s1 >> s2;

    bool isCorrect = true;
    for(int i = 0; i < (int)s1.size(); i++) {
      if(s1[i] != s2[(int)s1.size() - 1 - i]) {
        isCorrect = false;
        break;
      }
    }

    if(isCorrect)
      cout << "YES";
    else
      cout << "NO";
}

