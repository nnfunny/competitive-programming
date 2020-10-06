#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++) {
      int num;
      cin >> num;
      if(m.find(num) == m.end()) {
        m[num] = 1;
      } else
        ++m[num];
    }

    int max_v = INT_MIN;
    for(auto const& x: m) 
      max_v = max(max_v, x.second);

    cout << (max_v <= (n+1)/2 ? "YES" : "NO");
}
