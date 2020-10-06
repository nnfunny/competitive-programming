#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, sx, sy, ex, ey;
    string winds;
    cin >> t >> sx >> sy >> ex >> ey >> winds;

    int i;
    for(i = 0; i < t; i++) {
      int x, y;
      if(winds[i] == 'E')
        x = 1, y = 0;
      else if(winds[i] == 'S')
        x = 0, y = -1;
      else if(winds[i] == 'W')
        x = - 1, y = 0;
      else
        x = 0, y = 1;

      long long disXNew = sx + x - ex > 0 ? sx + x - ex : ex - sx - x;
      long long disYNew = sy + y - ey > 0 ? sy + y - ey : ey - sy - y;
      long long disYCurr = sy - ey > 0 ? sy - ey : ey - sy ;
      long long disXCurr = sx - ex > 0 ? sx - ex : ex - sx ;
      if(disXNew <= disXCurr && disYNew <= disYCurr) {
        sx += x;
        sy += y;
      }

      if(sx == ex && sy == ey) {
        cout << i+1;
        return 0;
      }
    }
    cout << -1;
}
