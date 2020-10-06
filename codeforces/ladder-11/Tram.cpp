#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int capacity = 0, total = 0;
    for(int i = 0; i < n ; i++) {
      int exit, enter;
      cin >> exit >> enter;
      if(i == 0) {
        total = enter;
        capacity = max(total, capacity);
        continue;
      }
      total = total - exit + enter;
      capacity = max(total, capacity);
    }
    cout << capacity;
}

