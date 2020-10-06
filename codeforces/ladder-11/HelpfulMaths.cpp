#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string math;
    cin >> math;
    int len = int(math.length());
    vector<int> v(3, 0);
    for(char c: math) {
      if(c != '+')
        v[c-'1']++;
    }

    string ans = "";
    for(int i = 0; i < 3; i++) {
      for(int j = 0; j < v[i]; j++) {
        ans += to_string(i+1);
        len--;
        if(len--)
          ans += '+';
      }
    }
    cout << ans;
}

