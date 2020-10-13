// Problem link: https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/yet-another-easy-problem-1f3273a0/
#include <iostream>
#include <vector>
using namespace std;
 
int sumHex(int num) {
	int sum = 0; 
	while(num) {
		sum += num % 16;
		num /= 16;
	}
	return sum;
}
 
int GCD(int x, int sum) {
	if(sum == 0)
		return x;
	else
		return GCD(sum, x%sum);
}
void solve() {
	int l, r;
	cin >> l >> r;
 
	int cnt = 0;
	for(int i = l; i <= r; i++) {
		int sum = sumHex(i);
		if(GCD(i, sum) > 1)
			cnt++;
	}
	cout << cnt << '\n';
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
 
 
	int t;
	cin >> t;
	while(t--)
		solve();
}