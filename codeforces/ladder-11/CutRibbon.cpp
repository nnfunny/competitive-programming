#include <bits/stdc++.h>
using namespace std;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}
#define ll long long
const char newl = '\n';

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,a,b,c;
    cin >> n >> a >> b >> c;
    int ans = 0;
    for(int x = 0; x <= n; x++) {
        for(int y = 0; y <= n; y++) {
            int cz = n - a*x - b*y;
            if(cz >= 0 && cz % c == 0) {
                int z = cz / c;
                ans = max(ans, x+y+z);
            }
        }
    }
    cout << ans;
}
