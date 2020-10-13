// Problem link: https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/repeated-k-times/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
 
	map<int, int> m;
	int n, k;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if(m.find(num) == m.end())
			m[num] = 1;
		else
			m[num]++;
	}
 
	cin >> k;
	for(auto &x: m) {
		if(x.second == k) {
			cout << x.first;
			break;
		}
	}
}
