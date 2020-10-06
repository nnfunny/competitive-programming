#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    unordered_set<int> collect;
    for(char c: s) 
      collect.insert(c);
    string ans = collect.size() & 1 ? "IGNORE HIM!" : "CHAT WITH HER!";
    cout << ans;
}
