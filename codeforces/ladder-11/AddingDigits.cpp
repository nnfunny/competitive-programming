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
#define newl '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b, n;
    cin >> a >> b >> n;

    int ans = 0;
    for(int i = 1; i <= 9; i++) {
        int newA = a * 10 + i;
        if(newA % b == 0) {
            ans = newA;
            break;
        }
    }

    if(ans)
        cout << ans * pow(10, n-1);
    else
        cout << -1;
}
