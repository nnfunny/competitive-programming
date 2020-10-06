#include <bits/stdc++.h>
using namespace std;

const int limit = 1e7 + 1;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    
    for(int i = 2; i < limit && n; i++) {
      bool prime = true;
      for(int j = 2; j*j <= i; j++) {
        if(i%j == 0) {
          prime = false;
          break;
        }
      }
      if(prime) {
        n--;
        cout << i << " ";
      }
    }
}
