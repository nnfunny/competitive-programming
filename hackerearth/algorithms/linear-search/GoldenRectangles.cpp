// Problem link: https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/almost-golden-rectangular-1c9d72c0/
#include <bits/stdc++.h>
#define ll long long;

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
 
	int n, cnt = 0;
	double w, h;
	cin >> n;
 
	for(int i = 0; i < n; i++) {
		cin >> w >> h;
		double ratio = max(w / h, h / w);
		if(ratio <= 1.7 && ratio >= 1.6)
			cnt++;
	}
	cout << cnt;
}