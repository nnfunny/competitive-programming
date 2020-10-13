// Problem link: https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/easy-sum-set-problem-7e6841ca/
#include <iostream>
#include <map>
using namespace std;
 
int A[101], C[101], a, c;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
 
	map<int, int> m;
	cin >> a;
	for(int i = 0; i < a; i++)
		cin >> A[i];
	cin >> c;
	for(int i = 0; i < c; i++)
		cin >> C[i];
	for(int i = 0; i < a; i++) {
		for(int j = 0; j < c; j++) {
			int diff = C[j] - A[i];
			if(m.find(diff) == m.end())
				m[diff] = 1;
			else
				m[diff]++;
		}
	}
 
	for(auto &x : m) {
		if(x.second == a)
			cout << x.first << ' ';
	}
}