#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long n, k;
    cin >> n >> k;

    long long half = (n % 2 == 0) ? (n / 2) : (n / 2 + 1);
    long long ans;
    if(k <= half)
      ans = 1 + 2*(k-1);
    else
      ans = 2*(k-half);
    cout << ans;
}

