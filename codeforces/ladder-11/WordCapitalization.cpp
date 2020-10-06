#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string word;
    cin >> word;
    if(word[0] >= 97)
      word[0] -= 32;

    cout << word;
}

