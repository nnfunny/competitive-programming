#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    for(int i = a+1; i <= n; i++)
      if((n-i) <= b)
        ans++;
    cout << ans;
}

