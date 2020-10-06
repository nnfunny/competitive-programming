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
ll x, y, n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> x >> y >> n;

    ll ans;
    vector<int> v(7);
    v[1] = x;
    v[2] = y;
    v[3] = y - x;
    v[4] = -x;
    v[5] = -y;
    v[0] = x - y;

    ans = v[n % 6] % mod;
    cout << ans;
}
