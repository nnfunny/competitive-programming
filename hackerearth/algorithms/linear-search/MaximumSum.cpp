// Problem link: https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/maximum-sum-4-f8d12458/
#include <iostream>
#include <limits.h>
using namespace std;
 
#define ll long long
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
 
	int n, cnt = 0;
	ll sum = 0;
	ll maxV = LLONG_MIN;
	cin >> n;
	for(int i = 0; i < n; i++) {
		ll num;
		cin >> num;
		if(num >= 0) {
			sum += num;
			cnt++;
		}
		if(num > maxV)
			maxV = num;
	}
	if(maxV < 0)
		cout << maxV << ' ' << 1;
	else
		cout << sum << ' ' << cnt;
}