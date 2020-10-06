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
    
    int sum1 = 0, sum2 = 0, flag = 0;
    for(int i = 0; i < n; i++) {
      int a, b;
      cin >> a >> b;
      sum1 += a;
      sum2 += b;
      if((a+b) % 2)
        flag = 1;
    }

    if(sum1 % 2 == 0 && sum2 % 2 == 0) {
      cout << 0;
      return 0;
    }

    if((sum1+sum2) % 2) {
      cout << -1;
      return 0;
    }

    if(flag) {
      cout << 1;
      return 0;
    }
    cout << -1;
}
