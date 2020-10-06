#include <bits/stdc++.h>
using namespace std;

string str;
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
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> str;
    int stop = 0;
    bool isFirst = true;
    while(!check_palindrome(str, stop)) {
      str = str.substr(0,stop) + str.substr(stop+1);
      cout << str << '\n';
      isFirst = false;
    }
    if(isFirst)
      cout << "First";
    else
      cout << "Second";
}
