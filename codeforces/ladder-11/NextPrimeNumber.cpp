#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int m, n;
    cin >> m >> n;
    
    int next = m;
    bool flag = true;
    while(true) {
      next++;
      for(int i = 2; i <= 25 && flag && i != next; i++) {
        if(next % i == 0)
          flag = false;
      }
      if(flag)
        break;
      flag = true;
    }

    if(next == n)
      cout << "YES";
    else
      cout << "NO";
}

