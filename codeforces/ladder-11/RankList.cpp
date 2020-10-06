#include <bits/stdc++.h>
using namespace std;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}
#define ll long long
const char newl = '\n';

bool comparer (pair<int, int> &a, pair<int, int> &b) {
    return a.first > b.first || (a.first == b.first && a.second < b.second);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    vector<pair<int, int>> v;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        int a,b;
        cin >> a >> b;
        v.push_back({ a, b });
    }

    sort(v.begin(), v.end() , comparer);
    k--;
    int l = k, r = k;
    while(l-1 >= 0 && v[l-1].first == v[k].first && v[l-1].second == v[k].second)
        l--;
    while(r+1 < n && v[r+1].first == v[k].first && v[r+1].second == v[k].second)
        r++;
    cout << r-l+1;
}
