#include <bits/stdc++.h>
using namespace std;

const int N = int(1e5 + 3);
int arr[N];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
      int ele;
      cin >> ele;
      arr[ele] = i + 1;
    }
    
    int n_q;
    cin >> n_q;
    long long petya = 0;
    long long vasya = 0;
    for(int i = 0; i < n_q; i++) {
      int target;
      cin >> target;
      vasya += arr[target];
      petya += n - arr[target] + 1;
    }
    
    cout << vasya << ' ' << petya;
}

