#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<pair<int, int>> points;
    int maxX = 0, maxY = 0, minX = 0, minY = 0;
    for(int i = 0; i < n; ++i) {
      int x, y;
      cin >> x >> y;
      points.push_back({x, y});
      maxX = max(x, maxX);
      minX = min(x, minX);
      maxY = max(y, maxY);
      minY = min(y, minY);
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
      pair<int, int> point = points[i];
      if(point.first < maxX && point.first > minX) {
        if(point.second > minY && point.second < maxY) {
          int left = 1, right = 1, up = 1, down = 1;
          for(pair<int, int> p : points) {
            if(point.first == p.first && point.second < p.second && up)
              up = 0;
            else if(point.first == p.first && point.second > p.second && down)
              down = 0;
            else if(point.second == p.second && point.first < p.first && right)
              right = 0;
            else if(point.second == p.second && point.first > p.first && left)
              left = 0;
          }
          if(!up && !down && !right && !left)
            ans++;
        }
      }
    }
    cout << ans;
}

