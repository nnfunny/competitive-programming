#include <bits/stdc++.h>
using namespace std;

template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}
#define ll long long
const char newl = '\n';

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    string num;
    cin >> n >> num;

    string left = num.substr(0, n), right = num.substr(n);
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    bool one = true, two = true;
    for(int i = 0; i < n; i++) {
      if(left[i] >= right[i]) {
        one = false;
      }
    }
    for(int i = 0; i < n ; i++) {
      if(left[i] <= right[i]) {
        two = false;
      }
    }
    if(two || one)
      cout << "YES";
    else 
      cout << "NO";
}

