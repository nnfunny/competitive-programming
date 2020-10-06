#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    int arr[7];

    cin >> n;
    int i;
    for(i = 1; i <= 7; i++) {
      cin >> arr[i-1];
      n -= arr[i-1];
      if(n <= 0)
        break;
    }

    if(n > 0) {
      int j = -1;
      while(n > 0) {
        j++;
        n -= arr[j % 7];
      }
      cout << j % 7 + 1;
    } else 
      cout << i;
}


