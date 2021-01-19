#include <bits/stdc++.h>
using namespace std;

void raindomized_quick_sort(vector<int>& v, int low, int high) {
  if(low >= high)
    return;

  srand(time(0));
  int random = low + rand() % (high - low);
  // swap(v[random], v[low]);

  // int pivot = v[low];
  int pivot = v[random];
  int left = low - 1, right = high + 1;

  while(true) {
    do {
      left++;
    } while(v[left] < pivot);

    do {
      right--;
    } while(v[right] > pivot);

    if(right <= left) 
      break;
    swap(v[left], v[right]);
  }

  raindomized_quick_sort(v, low, right);
  raindomized_quick_sort(v, right+1, high);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<int> v = {10, 7, 8, 9, 1, 5};
    raindomized_quick_sort(v, 0, int(v.size())-1);
    for(int i = 0; i < int(v.size()); i++)
      cout << v[i] << ' ';

}
