#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i <= n; i++) {
      int space = (n - i);
      int remainingSpace = 2*n + 1 - space * 2;
      int right = 1;
      for(int j = 0; j < 2*n + 1; j++) {
        if(j <= space - 1) {
          if(j == 0)
            cout << ' ';
          else
            cout << ' ' << ' ' ;
        }
        else if(j < (2*n - space + 1)){
          if(j != 0) {
            int m = j - space;
            if(m <= remainingSpace / 2)
              cout << ' ' << m;
            else {
              cout << ' ' << m - (2 * right);
              right++;
            }
          } else
            cout <<  j;
        }
      }
      cout << '\n';
    }


    for(int i = n - 1; i >= 0; i--) {
      int space = (n - i);
      int remainingSpace = 2*n + 1 - space * 2;
      int right = 1;
      for(int j = 0; j < 2*n + 1; j++) {
        if(j <= space - 1) {
          if(j == 0)
            cout << ' ';
          else
            cout << ' ' << ' ' ;
        }
        else if(j < (2*n - space + 1)){
          if(j != 0) {
            int m = j - space;
            if(m <= remainingSpace / 2)
              cout << ' ' << m;
            else {
              cout << ' ' << m - (2 * right);
              right++;
            }
          } else
            cout <<  j;
        }
      }
      if(i != 0)
        cout << '\n';
    }
}

