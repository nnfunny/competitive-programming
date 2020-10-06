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
const char newl = '\n';

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> A(n), B(n);
    int count_1 = 0, count_0 = 0;
    for(int i = 0; i < n; i++) {
        cin >> A[i];
        if(A[i]) {
            B[i] = -1;
            count_1++;
        }
        else {
            B[i] = 1;
            count_0++;
        }
    }


    int start = 0, end = 0, s = 0;
    int max_end = 0, max_so_far = INT_MIN;
    for(int i = 0; i < n; i++) {
        max_end += B[i];
        if(max_so_far < max_end) {
            max_so_far = max_end;
            start = s;
            end = i;
        }

        if(max_end < 0) {
            max_end = 0;
            s = i + 1;
        }
    }

    for(int i = start; i <= end; i++)
        if(A[i])
            count_1--;
        else
            count_1++;
    cout << count_1;
}
