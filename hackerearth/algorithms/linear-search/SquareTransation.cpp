// Problem link: https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/square-transaction-20/
#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
 
	int T, Q;
	cin >> T;
	vector<int> v(T);
	for(int i = 0; i < T; i++) {
		cin >> v[i];
		if(i)
			v[i] += v[i-1];
	}
 
	cin >> Q;
	for(int i = 0; i < Q; i++) {
		int target;
		cin >> target;
		int achieve = false;
 
		for(int j = 0; j < T; j++) {
			if(v[j] >= target) {
				cout << j+1 << '\n';
				achieve = true;
				break;
			}
		}
 
		if(!achieve)
			cout << -1 << '\n';
	}
}
Language: C++17