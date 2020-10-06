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

const int nxM = 100 * 100 + 1;
int arr[nxM], m, n, d;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> m >> n >> d;
    for(int i = 0; i < m*n; i++) {
        cin >> arr[i];
        if(arr[i] % d !=0) {
            cout << -1;
            return 0;
        }
    }

    sort(arr, arr+m*n);
    int mid = m*n/2;
    int sum = 0;
    for(int i = 0; i < m*n; i++)
        sum += abs(arr[i] - arr[mid]);
    int res = sum / d;
    cout << res;
}
