#include <bits/stdc++.h>
using namespace std;

bool checkDistinct(int year) {
  string yearString = to_string(year);
  vector<int> v(10, 0);
  for(int i = 0; i < int(yearString.length()); ++i) {
    ++v[yearString[i] - '0'];
    if(v[yearString[i] - '0'] >= 2)
       return false; 
  }
  return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int year, ans;
    cin >> year;
    while(true) {
      year++;
      if(checkDistinct(year)) {
        ans = year;
        break;
      }
    }
    cout << ans;
    
}

