#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define arr array

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    int x = 0, y= 0, z = 0;
    for(int i = 0; i < n; i++) {
      int tempX = 0, tempY = 0, tempZ = 0;
      cin >> tempX;
      x += tempX;
      cin >> tempY;
      y += tempY;
      cin >> tempZ;
      z += tempZ;
    }

    if(!x && !y && !z)
      cout << "YES";
    else
      cout << "NO";
}

