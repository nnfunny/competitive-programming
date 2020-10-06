#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, t;
    cin >> n >> t;
    string q;
    cin >> q;
  
    string tempQ = q;
    for(int i = 0; i < t; i++) {
      for(int j = 1; j < n; j++) {
        if(q[j-1] == 'B' && q[j] == 'G') {
          tempQ[j] = 'B';
          tempQ[j-1] = 'G';
        } else
          tempQ[j] = q[j];
      }
      q = tempQ;
    }
    cout << tempQ;
}

