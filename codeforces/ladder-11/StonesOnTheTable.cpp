#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    string stones;
    cin >> n >> stones;

    int i = 0, count = 0;
    while(i < int(stones.length()) - 1) {
      if(stones[i] == stones[i+1]) {
        stones.erase(i+1, 1);
        count++;
      } else
        i++;
    }
    cout << count;
}

