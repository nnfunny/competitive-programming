#include <bits/stdc++.h>
using namespace std;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}
#define ll long long
const char newl = '\n';

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<string> v(4);
    vector<pair<int, int>> co{{0,0}, {1, 0}, {0,1}, {1, 1}};
    for(int i = 0; i < 4; i++)
        cin >> v[i];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            int m = 0, n = 0;
            for(auto const x: co) {
                if(v[i+x.first][j+x.second] == '#')
                    m++;
                else
                    n++;
            }
            if((m == 3 && n == 1) || (m == 1 && n == 3) || m == 4 || n == 4) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}
