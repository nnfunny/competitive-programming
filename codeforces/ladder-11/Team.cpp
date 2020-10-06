#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int count = 0;
    for(int i = 0; i < n; i++) {
      int one = 0;
      for(int j = 0; j < 3; j++) {
        int sure;
        cin >> sure;
        one += sure ? 1 : 0;
      }
      if(one >= 2)
        count++;
    }
    cout << count;
}

