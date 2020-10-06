#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  string borze;
  cin >> borze;
  
  string ans = "";
  int i = 0;
  while(i < int(borze.length())) {
    if(borze.substr(i,2) == "-.") {
      ans += '1';
      i += 2;
    }
    else if(borze.substr(i,2) == "--") {
      ans += '2';
      i+=2;
    }
    else if(borze[i] == '.') {
      ans += '0';
      i+=1;
    }
  }

  cout << ans;
}
