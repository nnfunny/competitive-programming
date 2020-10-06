#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    unordered_map<string, int> m;
    vector<string> v;
    for(int i = 0; i < n; i++) {
      string goal;
      cin >> goal;
      if(m.find(goal) == m.end()) {
        m[goal] = 1;
        v.push_back(goal);
       }
      else
        ++m[goal];
    }

    string ans;
    int maxV = INT_MIN;
    for(string g : v) {
      if(m[g] >= maxV) {
        ans = g;
        maxV = m[g];
      }
    }
    cout << ans;
}

