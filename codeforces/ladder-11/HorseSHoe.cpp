#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    unordered_set<int> s;
    int i = 4;
    while(i--) {
      int n;
      cin >> n;
      s.insert(n);
    }
    cout << 4 - s.size();
}

