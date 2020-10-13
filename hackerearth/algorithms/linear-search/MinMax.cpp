// Problem link: https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/min-max-8/
#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
#define ll long long int
 
int main() {
	ll n, maxV = INT_MIN, minV = INT_MAX, sum = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		ll num;
		cin >> num;
 
		sum += num;
		maxV = max(num, maxV);
		minV = min(num, minV);
	}
 
	cout << sum - maxV << ' ' << sum - minV;
}