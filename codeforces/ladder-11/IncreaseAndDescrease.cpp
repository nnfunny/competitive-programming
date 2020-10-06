#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, sum = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
      int num; 
      cin >> num;
      sum += num;
    }
    if(sum % n)
      cout << n-1;
    else 
      cout << n;
}


