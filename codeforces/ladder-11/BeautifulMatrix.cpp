#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int arr[5][5];
    int x = 0, y = 0;
    for(int i = 0; i < 5; i++) {
      for(int j = 0; j < 5; j++) {
        cin >> arr[i][j];
        if(arr[i][j]) {
          x = i;
          y = j;
          break;
        }
      }
    }

    int xMove = x > 2 ? x - 2 : 2 - x;
    int yMove = y > 2 ? y - 2 : 2 - y;
    cout << xMove + yMove;
}

