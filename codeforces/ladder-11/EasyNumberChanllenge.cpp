#include <bits/stdc++.h>
using namespace std;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}
#define ll long long
const char newl = '\n';

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    const int primes[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int mx[101][25] {0};
    for(int i = 2; i <= 100; i++) {
      int temp = i;
      for(int j = 0; j < 25; j++) {
        while(temp%primes[j] == 0) {
          mx[i][j] += 1;
          temp /= primes[j];
        }
      }
    }

    ll a,b,c;
    cin >> a>>b>>c;
    ll ans = 0;
    for(int x = 1; x <= a; x++) {
      for(int y = 1; y <= b; y++) {
        for(int z = 1; z <= c; z++) {
          int divisors = 1;
          for(int i = 0; i < 25; i++) 
            divisors *= (1 + mx[x][i] + mx[y][i] + mx[z][i]);
          ans += divisors;
        }
      }
    }

    cout << ans % 1073741824;
}
