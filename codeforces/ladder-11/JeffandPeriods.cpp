#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    map<int, vector<int>> m;
    for(int i = 0; i < n; i++) {
      int num;
      cin >> num;
      if(m.find(num) == m.end()) {
        vector<int> v;
        v.push_back(i);
        m[num] = v;
      } else 
        m[num].push_back(i);
    }

    vector<pair<int, int>> result;
    for(auto const& x: m) {
      if(x.second.size() == 1)
        result.push_back({x.first, 0});
      else {
        vector<int> v = x.second;
        int const sub = v[1] - v[0];
        bool isProgressive = true;
        for(int i = 1; i < int(v.size())-1; i++)
          if(v[i+1] - v[i] != sub) {
            isProgressive = false;
            break;
          }
        if(isProgressive)
          result.push_back({x.first, sub});
      }
    }
    if(!result.size()) 
      cout << result.size();
    else {
      cout << result.size() << '\n';
      for(pair<int, int> p : result)
        cout << p.first << ' ' << p.second << '\n';
    }
}
