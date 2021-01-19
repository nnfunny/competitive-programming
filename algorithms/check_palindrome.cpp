#include <bits/stdc++.h>
using namespace std;

bool check_palindrome(string s, int &stop) {
  int size = int(s.size());
  for(int i = 0; i <= (size-1)/ 2; i++) {
    if(s[i] != s[size-i-1]) {
      stop = i;
      return false;
    }
  }
  stop = (size-1) / 2;
  return true;
}

int main() {
  string str;
  cin >> str;
  int stop = 0;
  if(check_palindrome(str, stop))
    cout << stop;
  else
    cout << "Not";
}
