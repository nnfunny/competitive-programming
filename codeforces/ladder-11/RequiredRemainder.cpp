#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define arr array

int x, y, n;
void solution() {
  int ans;
  cin >> x >> y >> n;
  for(int i = n; i >= 0; i--)
    if(i % x == y) {
      ans = i;
      break;
    }
  cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    for(int i=1; i<=t; ++i) {
        solution();
    }
}

