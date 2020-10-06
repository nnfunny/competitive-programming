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

ll arr[100000], temp[100000];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        temp[i] = arr[i];
    }

    sort(temp, temp+n);
    int i=0;
    for(i=0;i<n-1;i++)
        if(arr[i] > arr[i+1])
            break;
    int j;
    for(j=n-1;j>=0;j--)
        if(arr[j] < arr[j-1])
            break;

    if(j==0||i==n-1) 
        cout << "yes\n1 1";
    else {
        reverse(arr+i, arr+j+1);
        for(int k = 0; k < n; k++)
            if(arr[k] != temp[k]){
                cout << "no";
                return 0;
            }
        cout << "yes" << newl;
        cout << i+1 << ' ' << j+1;
    }


}
