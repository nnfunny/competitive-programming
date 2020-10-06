#include <bits/stdc++.h>
using namespace std;

const int wxH = 1e5+1;
int q[wxH];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    bool isIdentical = true;
    int firstNum;
    for(int i = 0; i < n; i++) {
      cin >> q[i];
      if(!i)
        firstNum = q[0];
      else {
        if(firstNum != q[i])
          isIdentical = false;
      }
    }
    
    if(isIdentical) {
      cout << 0;
      return 0;
    }

    for(int i = k - 1; i < n - 1; i++)
      if(q[i] != q[i+1]) {
        cout << -1;
        return 0;
      }

    int count = 0;
    for(int i = k-2; i >= 0; i--)
      if(q[i] == q[k])
        count++;
      else
        break;
    cout << k-1-count;
}
