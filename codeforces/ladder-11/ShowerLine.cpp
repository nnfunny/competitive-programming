#include <bits/stdc++.h>
using namespace std;

int arr[5][5];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    for(int i = 0; i < 5; i++) 
      for(int j = 0; j < 5; j++)
        cin >> arr[i][j];

    int indices[] = {0, 1, 2, 3, 4};
    int maxV = INT_MIN;
    do {
      int sum = 0;
      sum += arr[indices[0]][indices[1]] + arr[indices[1]][indices[0]];
      sum += arr[indices[1]][indices[2]] + arr[indices[2]][indices[1]];
      sum += 2*(arr[indices[3]][indices[4]] + arr[indices[4]][indices[3]]);
      sum += 2*(arr[indices[2]][indices[3]] + arr[indices[3]][indices[2]]);
      maxV = max(maxV, sum);
    } while(next_permutation(indices, indices+5));
    cout << maxV;
}
