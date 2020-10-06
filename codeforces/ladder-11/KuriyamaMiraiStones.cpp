#include <bits/stdc++.h>
using namespace std;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}
#define ll long long
const char newl = '\n';

const int wxH = 1e5;
int n, m, type, l, r ;
ll arrSorrted[wxH],  arr[wxH];


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
        arrSorrted[i] = arr[i];
    }
    cin >> m;
    sort(arrSorrted, arrSorrted+n);

    for(int i = 1; i < n; i++) {
        arr[i] += arr[i-1];
        arrSorrted[i] += arrSorrted[i-1];
    }

    for(int i = 0; i < m; i++) {
        cin >> type >> l >> r;
        if(type == 1)
            cout << (arr[r-1]) - (l-1-1 < 0 ? 0 : arr[l-1-1]) << newl;
        else
            cout << (arrSorrted[r-1]) - (l-1-1 < 0 ? 0 : arrSorrted[l-1-1]) << newl;
    }
}
