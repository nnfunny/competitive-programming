// Problem link: https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/special-shop-69904c91/
#include <bits/stdc++.h>
#define ll long long

using namespace std;
 
ll n,a,b;
 
void solve() {
	cin >> n >> a >> b;
	ll minP = ((b*n)/(a+b));
	ll x = a * (minP) * (minP) + b * (n - minP) * (n - minP);
	ll y = a * (minP + 1) * (minP + 1) + b * (n - minP - 1) * (n - minP - 1);
	cout << min(x,y) << '\n';
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
 
	int t;
	cin >> t;
	while(t--)	
		solve();
}