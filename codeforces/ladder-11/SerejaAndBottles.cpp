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

int arr[101];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, a, b;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        if(a != b)
            arr[b] = 1;
    }

    int count = 0;
    for(int i = 1; i <= n; i++)
        if(!arr[i])
            count++;
    cout << count;
}
