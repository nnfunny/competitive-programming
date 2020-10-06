#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string bi;
    cin >> bi;

    int i;
    for(i = 0; i < int(bi.size()); i++)
      if(bi[i] == '0')
        break;

    string new_bi;
    if(i == int(bi.size())) 
      new_bi = bi.substr(1);
    else
      new_bi = bi.substr(0, i) + bi.substr(i+1);
    cout << new_bi;
}
