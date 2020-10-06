#include <bits/stdc++.h>
using namespace std;

bool isMagic(string number) {
  for(int i = 0; i < (int)number.size(); i++)
    if(number[i] != '1' && number[i] != '4')
      return false;
  if(number[0] == '4')
    return false;
  if(number.find("444") != number.npos)
    return false;
  return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string n;
    cin >> n;

    if(isMagic(n))
      cout << "YES";
    else
      cout << "NO";
}

