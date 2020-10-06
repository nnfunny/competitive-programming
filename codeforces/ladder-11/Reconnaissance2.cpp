#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> p;
    for(int i = 1; i <= n; ++i) {
      int h;
      cin >> h;
      p.push_back(h);
    }

    int minV = p[1] - p[0] > 0 ? p[1] - p[0] : p[0] - p[1];
    int ans = 0;
    for(int i = 1; i < n - 1; i++) {
      int sub = p[i+1] - p[i] > 0 ? p[i+1] - p[i] : p[i] - p[i+1];
      if(sub < minV) {
        ans = i;
        minV = sub;
      }
    }

    int another = p[0] - p[p.size() - 1] > 0 ? p[0] - p[p.size()- 1] : p[p.size() - 1] - p[0];
    if(another < minV)
      cout << p.size() << ' ' << 1;
    else 
      cout << ans + 1 << ' ' << ans + 2;
}

