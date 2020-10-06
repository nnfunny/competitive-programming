#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    vector<vector<int>> grid(3, vector<int>(3, 1));
    for(int i = 0; i < 3; ++i) {
      for(int j = 0; j < 3; ++j) {
        int times;
        cin >> times;
        if(times) {
          for(int m = 0; m < times; ++m) {
            grid[i][j] ^= 1;
            if(i + 1 < 3)
              grid[i+1][j] ^= 1;
            if(i - 1 >= 0)
              grid[i-1][j] ^= 1;
            if(j - 1 >= 0)
              grid[i][j-1] ^= 1;
            if(j + 1 < 3) 
              grid[i][j+1] ^= 1;
          }
        }
      }
    }

    for(int i = 0; i < 3; i++) {
      for(int j = 0; j < 3; ++j) {
        cout << grid[i][j];
      }
      cout << '\n';
    }
}

