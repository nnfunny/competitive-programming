#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, candies;
    cin >> n >> candies;
    queue<pair<int, int>> q;
    for(int i = 1; i <= n; i++) {
      int candy;
      cin >> candy;
      q.push({i, candy});
    }

    while(q.size() != 1) {
      if((q.front().second - candies) <= 0 )
        q.pop();
      else {
        q.front().second -= candies;
        q.push(q.front());
        q.pop();
      }
    }
    cout << q.front().first;
}

