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

void solution() {
  int n, k;
  string s;
  int res = 0;

  cin >> n >> k >> s;

  for(int i = 1; i <= n / 2; i++) {
    int pointer1 = i;
    int pointer2 = n - i + 1;
    if(s[pointer1 - 1] != s[pointer2 - 1])
      k--;
  }
  if(k == 0) {
    cout << 0 << newl;
    return;
  }

  res = abs(k);
  cout << res << newl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for(int i=1; i<=t; ++i) {
        cout << "Case #" << i << ": ";
        solution();
    }
}

