#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string word;
    cin >> word;
    vector<int> v(123, 0);
    
    for(int c : word)
      v[c]++;

    int lower = 0;
    for(int i = 97; i <= 122; i++)
      lower += v[i];

    int upper = 0;
    for(int i = 65; i <= 90; i++)
      upper += v[i];

    string ans = "";
    if(lower >= upper) {
      for(char c: word)
        ans += tolower(c);
    } else {
      for(char c: word)
        ans += toupper(c);
    }

    cout << ans;
}

