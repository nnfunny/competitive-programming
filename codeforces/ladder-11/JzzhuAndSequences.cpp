#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <unordered_map> 
#include <set>
#include <unordered_set> 
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}
#define ll long long
#define new '\n'

const ll mod = 1000000007;
ll x, y ;
ll f(int n) {
    if(n==1)
        return x;
    else if(n==2)
        return y;
    return f(n-1) - f(n-2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> x >> y >> n;

    ll ans;
    if(n == 2) {
        ans = y % mod;
        cout << ans;
        return 0;
    }
    if(n == 1) {
        ans = x % mod;
        cout << ans;
        return 0;
    }
    ans = f(n) % mod;
    cout << ans;
}
