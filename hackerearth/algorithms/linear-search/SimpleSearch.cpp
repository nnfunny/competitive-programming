// Prolem link: https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/simple-search-4/
#include <iostream>
using namespace std;
 
int arr[100002];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
 
	int n, k;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> k;
 
	for(int i = 0; i < n; i++)
		if(arr[i] == k) {
			cout << i;
			return 0;
		}
}