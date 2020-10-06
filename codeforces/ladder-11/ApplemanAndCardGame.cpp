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

int arr[26];
bool comparer(pair<char, int> a, pair<char, int> b) {
    return a.second > b.second;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    string s;
    cin >> n >> k >> s;
    
    for(int i = 0; i < n; i++) 
        arr[s[i]-'A']++;

    vector<pair<char, int>> v;
    for(int i = 0; i < 26; i++)
        if(arr[i])
            v.push_back({'A' + i, arr[i]});

    sort(v.begin(), v.end(), comparer);
    int ans = 0;
    int i = 0;
    for(auto x: v) {
        i++;
        if(k-x.second >= 0) {
            ans += x.second * x.second;
            k -= x.second;
        } else
            break;
    }

    cout << ans+k*k;
}
