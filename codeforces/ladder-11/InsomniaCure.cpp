#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    if(k == 1 || l == 1 || m == 1 || n == 1)
      cout << d;
    else {
      int count = 0;
      for(int i = 2; i <= d; i++) {
        if(i % k == 0 || i % l == 0)
          count++;
        else if(i % m == 0 || i % n == 0)
          count++;
      }
      cout << count;
    }
}

