#include <bits/stdc++.h>
using namespace std;

int arr1[26], arr2[26];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s1, s2;
    cin >> s1 >> s2;
    
    if(int(s1.size()) != int(s2.size())) {
      cout << "NO";
      return 0;
    }

    int diff_index = 0, diff_index_2 = 0;
    int first = false, second = false;
    for(int i = 0; i < int(s1.size()); i++) {
      arr1[s1[i]-'a']++;
      arr2[s2[i]-'a']++;

      if(!first && s1[i] != s2[i]) {
        diff_index = i;
        first = true;
        continue;
      }
      if(first && !second && s1[i] != s2[i]) {
        diff_index_2 = i;
        second = true;
      }
    }

    
    for(int i = 0; i < int(s1.size()); i++) {
      int index = s1[i]-'a';
      if(arr1[index] != arr2[index]) {
        cout << "NO";
        return 0;
      }
    }

    swap(s1[diff_index], s1[diff_index_2]);
    if(s1 == s2)
      cout << "YES";
    else 
      cout << "NO";
}
