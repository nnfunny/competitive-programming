#include <bits/stdc++.h>
using namespace std;

int arr[26];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string s;
    cin >> s;
    for(int i = 0; i < int(s.size()); i++) 
      arr[s[i]-'a']++;

    int odd = 0;
    for(int i = 0; i < 26; i++)
      if(arr[i] & 1)
        odd++;
    if(odd == 0) {
      cout << "First";
      return 0;
    }
    if(odd % 2 == 0) {
      cout << "Second";
      return 0;
    }
    cout << "First";
    return 0;
}

