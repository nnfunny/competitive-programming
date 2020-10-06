#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long number;
    cin >> number;

    int count = 0;
    while(number) {
      int remainder = number % 10;
      if(remainder == 7 || remainder == 4)
        count++;
      number /= 10;
    }

    if(count == 7 || count == 4)
      cout << "YES";
    else
      cout << "NO";
}

