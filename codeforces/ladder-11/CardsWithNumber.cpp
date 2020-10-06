#include <bits/stdc++.h>
using namespace std;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}
#define ll long long
const char newl = '\n';

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<vector<int>> v(5001);
    int n;
    cin >> n;
    for(int i = 1; i <= 2*n; i++) {
      int num;
      cin >> num;
      v[num].push_back(i);
    }
    for(int i = 1; i <= 5000; i++)
      if(int(v[i].size()) & 1) {
        cout << -1;
        return 0;
      }
    for(int i = 1; i <= 5000; i++) {
      if(int(v[i].size()) == 2)
        cout << v[i][0] << ' ' << v[i][1] << '\n';
    }
}
