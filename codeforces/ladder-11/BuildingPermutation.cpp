#include <bits/stdc++.h>
using namespace std;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}
#define ll long long
const char newl = '\n';

const int wxH = 3*1e5+1;
ll n, arr[wxH];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr+n);

    ll ans = 0;
    for(int i = 0; i < n; i++) 
        ans += (i+1) - arr[i] >= 0 ? (i+1 - arr[i]) : arr[i] - (i+1);
    cout << ans;
}
