#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    long long ans = 0;
    int currHouse = 1;
    for(int i = 0; i < m; i++) {
      int houseNum;
      cin >> houseNum;
      if(currHouse <= houseNum)
        ans += houseNum - currHouse;
      else
        ans += (houseNum-1) + (n-currHouse) + 1;

      currHouse = houseNum;
    }
    cout << ans;
}

