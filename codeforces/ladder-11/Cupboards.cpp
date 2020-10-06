#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<pair<int, int>> cps;
    int n, l0 = 0, r0 = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
      int l, r;
      cin >> l >> r;
      if(l == 0)
        l0++;
      if(r == 0)
        r0++;
      cps.push_back({l, r});
    }

    int right_common = r0 > n - r0 ? 0 : 1;
    int left_common = l0 > n - l0 ? 0 : 1;

    int count = 0;
    for(auto c : cps) {
      if(c.first != left_common)
        count++;
      if(c.second != right_common) 
        count++;
    }
    cout << count;
}

