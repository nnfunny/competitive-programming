#include <bits/stdc++.h>
using namespace std;

const int wxH = 12;
int k, arr[wxH];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> k;
    for(int i = 0; i < 12; i++)
      cin >> arr[i];
    sort(arr, arr+12, [](int &a, int &b) {
        return a > b;
    });

    int i = 0;
    while(k > 0 && i < 12) {
      k -= arr[i];
      i++;
    }
    if(k <= 0)
      cout << i;
    else
      cout << -1;
}

