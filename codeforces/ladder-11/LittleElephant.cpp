#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    unordered_map<int,vector<int>> m;
    int minV = INT_MAX;
    for(int i = 1; i <= n; i++) {
      int time;
      cin >> time;
      if(m.find(time) == m.end()) {
        vector<int> v;
        m[time] = v;
        m[time].push_back(i);
      } else 
        m[time].push_back(i);

      minV = min(minV, time);
    }
    int size = m[minV].size();
    if(size == 1)
      cout << m[minV][0];
    else
      cout << "Still Rozdil";
}

