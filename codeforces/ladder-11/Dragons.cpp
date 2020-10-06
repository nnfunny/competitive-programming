#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++) {
      int x, y;
      cin >> x >> y;
      v.push_back({x, y});
    }

    sort(v.begin(), v.end(), [](pair<int, int> &a, pair<int, int> &b) {
        return a.first < b.first;
    });
    int count = n;
    for(pair<int, int> x : v) {
      if(x.first < s) {
        s += x.second;
        count--;
      }
    }
    
    if(!count)
      cout << "YES";
    else
      cout << "NO";
}
