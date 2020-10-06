#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string first, second;
    cin >> first >> second;

    for_each(first.begin(), first.end(), [](char & c) {
        c = tolower(c);
        });
    for_each(second.begin(), second.end(), [](char & c) {
        c = tolower(c);
        });
    if(first == second)
      cout << 0;
    else if(first > second)
      cout << 1;
    else if(first < second)
      cout << -1;
}

