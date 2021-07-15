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
#include <limits.h>
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

  long n;

  cin >> n;

  if (n == 1) {
    cout << n << ' ';
    return 0;
  }

  cout << n << ' ';

  while (n != 1) {
    if (n & 1) {
      n = n * 3 + 1;
    } else {
      n /= 2;
    }

    cout << n << ' ';
  }
}
