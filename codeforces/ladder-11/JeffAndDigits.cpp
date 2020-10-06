#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int zeroNum = 0, fiveNum = 0;
    for(int i = 1; i <= n; i++) {
      int num;
      cin >> num;
      if(num == 5)
        fiveNum++;
      else
        zeroNum++;
    }

    string ans = "";
    if(zeroNum == 0)
      cout << -1;
    else if(fiveNum < 9 && zeroNum != 0)
      cout << 0;
    else {
      int times = fiveNum / 9;
      for(int i = 0; i < times * 9; i++)
        ans += '5';

      if(zeroNum == 0)
        cout << ans;
      else {
        for(int i = 0; i < zeroNum; i++)
          ans += '0' ;
        cout << ans;
      }
    }
}
