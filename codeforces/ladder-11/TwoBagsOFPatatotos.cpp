#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long y, k, n;
    cin >> y >> k >> n;
    vector<long long> v;
    for(int i = 1; i <= 1e5; i++) {
      if(i*k <= n && i*k - y >= 1) {
        v.push_back(i);
        cout << (i*k-y) << ' ';
      }

    }
    if(v.size() == 0)
      cout << -1;
}
