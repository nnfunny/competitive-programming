#include <bits/stdc++.h>
using namespace std;

int arr1[58], arr2[58];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    for(int i = 0; i < int(s1.size()); i++)
      if(s1[i] != ' ')
        arr1[s1[i] - 'A']++;
    for(int i = 0; i < int(s2.size()); i++)
      if(s2[i] != ' ')
        arr2[s2[i] - 'A']++;

    for(int i = 0; i < int(s2.size()); i++)
      if(arr2[s2[i] - 'A'] > arr1[s2[i] - 'A']) {
        cout << "NO";
        return 0;
      }
    cout << "YES";
}
