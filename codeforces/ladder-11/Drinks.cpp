#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    double long sum = 0;
    for(int i = 0; i < n; i++) {
      double m;
      cin >> m;
      sum += m;    
    }
    cout << sum / n;
}
