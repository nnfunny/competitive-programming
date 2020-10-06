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
    ll cnt = 0;
    for(int a = 1; a < n; a++) {
      for(int b = a; a*a+b*b<=n*n;b++) {
        int temp = sqrt(a*a+b*b);
        if(temp*temp == a*a+b*b)
          cnt++;
      }
    }
    cout << cnt;
}
