#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int n;
    cin >> n;
    unordered_map<int, int> vas, pet;
    for(int i = 0; i < n; i++) {
      int ele;
      cin >> ele;
      vas[ele] = i+1;
      pet[ele] = n-i;
    }
    
    int n_q;
    cin >> n_q;
 
    long long petya = 0;
    long long vasya = 0;
    for(int i = 0; i < n_q; i++) {
      int target;
      cin >> target;
      petya += pet[target];
      vasya += vas[target];
    }
    
    cout << vasya << ' ' << petya;
}
