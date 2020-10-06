#include <bits/stdc++.h>
using namespace std;

int m, n;
const int hxW = 100;
int arr[hxW];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;
    for(int i = 0; i < n; i++) 
      cin >> arr[i];
    sort(arr, arr+n);
    int ans = 0;
    for(int i = 0; i < m; i++)
      ans += (arr[i] <= 0 ? -arr[i] : 0);
    cout << ans;
}

