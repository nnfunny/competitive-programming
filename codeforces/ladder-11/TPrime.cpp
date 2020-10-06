
#include <bits/stdc++.h>
using namespace std;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}
#define ll long long
const char newl = '\n';
const int wxH = 1e6+1;
int arr[wxH];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);


    for(ll i = 2; i*i < 1000001; i++) {
        if(!arr[i])
            for(ll j = i*i; j < 1000001; j += i)
                arr[j] = 1;
    }

    ll n;
    cin >> n;
    for(ll i = 0; i < n; i++) {
        ll num;
        cin >> num;

        ll a = sqrt(num);
        if(num == 1)
            cout << "NO" << newl;
        else if(num == a*a && !arr[a])
            cout << "YES" << newl;
        else 
            cout << "NO" << newl;
    }
}
