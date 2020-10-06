#include <bits/stdc++.h>
using namespace std;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}
#define ll long long
const char newl = '\n';

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    int n, m;
    cin >> n >> m;
    string ans = "";
    char chosen = n > m ? 'B' : 'G';
    string x = chosen == 'B' ? "BG" : "GB";
    for(int i = 0; i < min(m, n); i++) {
      ans += x;
    }

    int left = n > m ? n-m:m-n;
    for(int i = 0; i < left;i++)
      ans += chosen;
    cout << ans;
}
