#include <bits/stdc++.h>
using namespace std;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}
#define ll long long
const char newl = '\n';

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> v(101, 0);
    bool ok = 1;
    for(int i = 0; i < n; i++) {
      int re;
      cin >> re;
      v[re]++;
      if(re == 25)
        continue;
      else if(re == 50) {
        if(v[25] < 1) {
          ok = 0;
          break;
        } else 
          v[25]--;
      } else if(re == 100) {
        if(v[50] >= 1 && v[25] >= 1) {
          v[25]--;
          v[50]--;
          continue;
        }
        if(v[25] >= 3) {
          v[25] -= 3;
          continue;
        }
        ok = 0;
        break;
      }
    }

    if(ok)
      cout << "YES";
    else
      cout << "NO";
}
