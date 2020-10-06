#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, fingers = 0;
    cin >> n;

    for(int i = 0; i < n; ++i) {
      int number;
      cin >> number;
      fingers += number;
    }

    int ans = 0;
    for(int i = 1; i <= 5; i++) {
      if((fingers+i) % (n+1) != 1)
        ans++;
    }
    cout << ans;
}

