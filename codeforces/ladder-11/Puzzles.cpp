#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> v;
    for(int i = 0; i < m; i++) {
      int number;
      cin >> number;
      v.push_back(number);
    }

    sort(v.begin(), v.end());
    int ans = INT_MAX;
    for(int i = 0; i <= m - n; i++) {
      ans = min(ans, v[i+n-1]-v[i]);
    }
    cout << ans;
}
