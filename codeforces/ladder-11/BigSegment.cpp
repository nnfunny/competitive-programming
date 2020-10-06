#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int max_upper = INT_MIN, min_lower = INT_MAX;
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++) {
      int l,r;
      cin >> l >> r;
      v.push_back({l, r});
      max_upper = max(max_upper, r);
      min_lower = min(min_lower, l);
    }

    for(int i = 0; i < n; i++)
      if(v[i].first == min_lower && v[i].second == max_upper) {
        cout << i+1;
        return 0;
      }

    cout << -1;
}
