#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n; 

    int arr[n];
    if(n % 2 != 0)
      cout << -1;
    else {
      for(int i = 1; i <= n; i++)
        arr[i-1] = i;
      for(int i = 0; i <= n - 2; i+=2)
        swap(arr[i], arr[i+1]);
      for(int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    }
}

