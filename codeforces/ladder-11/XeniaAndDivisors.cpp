#include <bits/stdc++.h>
using namespace std;

int arr[8], n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    bool is_valid = true;
    for(int i = 0; i < n; i++) {
      char num;
      cin >> num;
      arr[num-'0']++;
      if(num == 5 || num == 7)
        is_valid = false;
    }
    if(!is_valid) {
      cout << -1;
      return 0;
    }


    int n_groups = n / 3;

    if(n_groups == arr[1] && n_groups == (arr[2] + arr[3]) && n_groups == (arr[4] + arr[6])) {
      vector<vector<int>> v;
      for(int i = 0; i < arr[4] && arr[4] && arr[2] && arr[1]; i++) {
        vector<int> temp = {1,2,4};
        v.push_back(temp);
      }

      for(int i = 0; i < arr[2] - arr[4] && arr[2] && arr[1] && arr[6]; i++) {
        vector<int> temp = {1,2,6};
        v.push_back(temp);
      }

      for(int i = 0; i < arr[3] && arr[3] && arr[1] && arr[6]; i++) {
        vector<int> temp = {1,3,6};
        v.push_back(temp);
      }

      int size = int(v.size());
      if(size == n_groups) {
        for(int i = 0; i < n_groups; i++)
          cout << v[i][0] << ' ' << v[i][1] << ' ' << v[i][2] << '\n';
      } else
        cout << -1;
      
    } else
      cout << -1;
}

