#include <bits/stdc++.h>
using namespace std;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}
#define ll long long
const char newl = '\n';

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    s += '$';
    int n = int(s.size());
    vector<int> p(n), c(n);

    // k = 0
    {
      vector<pair<int, int>> v(n);
      for(int i = 0; i < n; i++) 
        v[i] = {s[i], i};
      sort(v.begin(), v.end());

      for(int i = 0; i < n; i++)
        p[i] = v[i].second;

      c[p[0]] = 0;
      for(int i = 1; i < n; i++) {
        if(v[i].first == v[i-1].first)
          c[p[i]] = c[p[i-1]];
        else
          c[p[i]] = c[p[i-1]] + 1;
      }
    }

    // k = k + 1
    int k = 0;
    while((1 << k) < n) {
      vector<pair<pair<int, int>, int>> v(n);
      for(int i = 0; i < n; i++) 
        v[i] = {{c[i], c[(i+(1 << k)) % n]}, i};
      sort(v.begin(), v.end());

      for(int i = 0; i < n; i++)
        p[i] = v[i].second;

      c[p[0]] = 0;
      for(int i = 1; i < n; i++) {
        if(v[i].first == v[i-1].first)
          c[p[i]] = c[p[i-1]];
        else
          c[p[i]] = c[p[i-1]] + 1;
      }
      k++;
    }

    for(int i = 0; i < n; i++)
      // cout << p[i] << ' ';
      cout << s.substr(p[i], n-p[i]) << '\n';
}
