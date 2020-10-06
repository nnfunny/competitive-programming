#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int upper, lower;
    int count = 0;
    for(int i = 0; i < n; i++) {
      int score;
      cin >> score;
      if(i == 0) {
        upper = score;
        lower = score;
      }

      if(score < lower) {
        count++;
        lower = score;
      } else if(score > upper) {
        count++;
        upper = score;
      }
    }
    cout << count;
}

