// Unfinished

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

const int n = 1000;
int mt[n][n];

void check_L(int step_ver, int step_hor, int i, int j, int &res, int r, int c) {
  pair<int, int> point1;
  pair<int, int> point2;
  {
    point1 = make_pair(i, j);
    point2 = make_pair(i, j);

    while(true) {
      point1.first += step_ver;
      if(point1.first >= c && point1.first < 0)
        break;
      if(!mt[point1.first][point1.second])
        break;

      int k = 3;
      bool is_invalid = false;
      while(k--) {
        point2.second += step_hor;
        if(point2.second >= r && point2.second < 0)
          break;
        if(!mt[point2.first][point2.second]) {
          is_invalid = true;
          break;
        }
      }

      if(is_invalid)
        break;

      res++;

      point1.first += step_ver;
      point2.second += step_hor;
      if(point1.first >= c && point1.first > 0 && point2.second >= r && point2.second > 0)
        break;
    }

  }

  {
    point1 = make_pair(i, j);
    point2 = make_pair(i, j);

    while(true) {
      point1.second += step_hor;
      if(point1.second >= r && point1.second < 0)
        break;
      if(!mt[point1.first][point1.second])
        break;

      int k = 3;
      bool is_invalid = false;
      while(k--) {
        point2.first += step_ver;
        if(point2.first >= c && point2.first < 0)
          break;
        if(!mt[point2.first][point2.second]) {
          is_invalid = true;
          break;
        }
      }

      if(is_invalid)
        break;

      res++;

      point1.second += step_hor;
      point2.first += step_ver;
      if(point1.second >= r && point1.second > 0 && point2.first >= c && point2.first > 0)
        break;
    }
  }
}

void solution() {
  int r,c;
  int res = 0;
  cin >> r >> c;

  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      cin >> mt[i][j];
    }
  }

  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      if(mt[i][j]) {
        check_L(1, 1, i, j, res, r, c);

        check_L(-1, 1, i, j, res, r, c);

        check_L(1, -1, i, j, res, r, c);

        check_L(-1, -1, i, j, res, r, c);
      }
    }
  }

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

