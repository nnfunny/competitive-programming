
#include <bits/stdc++.h>
using namespace std;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}
#define ll long long
const char newl = '\n';

void count_sort(vector<int> &p, vector<int> &c) {
  int n = p.size();
  vector<int> cnt(n);
  for(auto x: c)
    cnt[x]++;

  vector<int> p_new(n);
  vector<int> pos(n);
  pos[0] = 0;
  for(int i = 1; i < n; i++)
    pos[i] = pos[i - 1] + cnt[i - 1];

  for(auto x : p) {
    int i = c[x];
    p_new[pos[i]] = x;
    pos[i]++;
  }
  p = p_new;
}

vector<int> suffix_array(string &s) {
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
      for(int i = 0; i < n; i++)
        p[i] = (p[i] - (1 << k) + n) % n;
      count_sort(p, c);

      vector<int> c_new(n);
      c_new[p[0]] = 0;
      for(int i = 1; i < n; i++) {
        pair<int, int> prev = {c[p[i-1]], c[(p[i-1] + (1 << k)) % n]};
        pair<int, int> now = {c[p[i]], c[(p[i] + (1 << k)) % n]};
        if(prev == now)
          c_new[p[i]] = c_new[p[i-1]];
        else
          c_new[p[i]] = c_new[p[i-1]] + 1;
      }
      c = c_new;
      k++;
    }

    // for(int i = 0; i < n; i++)
      // // cout << p[i] << ' ';
      // cout << s.substr(p[i], n-p[i]) << '\n';
    
    return p;
}

void solution(string &s, vector<int> &p) {
  string x;
  cin >> x;

  int n = p.size();
  bool ok = 0;

  // Binary Search
  int lower = 1, upper = n - 1;
  while(lower <= upper) { 
    int mid = lower + (upper - lower) / 2;
    string mid_string = s.substr(p[mid], int(x.size()));
    if(x == (mid_string)) {
      ok = 1;
      break;
    }
    if(x > (mid_string))
      lower = mid + 1;
    else
      upper = mid - 1;
  }

  if(ok)
    cout << "Yes" << newl;
  else 
    cout << "No" << newl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    string s;
    cin >> s >> t;
    vector<int> p = suffix_array(s);
    for(int i=1; i<=t; ++i) {
        solution(s, p);
    }
}

