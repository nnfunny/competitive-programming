// Problem link: https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/rest-in-peace-21-1/
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	int t;
	cin >> t;
	while(t--) {
		int num;
		cin >> num;
		string str = to_string(num);
 
		if(num % 21 == 0 || str.find("21") != string::npos)
			cout << "The streak is broken!" << endl;
		else
			cout << "The streak lives still in our heart!" << endl;
	}
 
	return 0;
}