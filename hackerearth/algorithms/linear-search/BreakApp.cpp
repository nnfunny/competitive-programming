// Problem link: https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/breakup-app/
#include<bits/stdc++.h>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
 
	int n, num;
	int date = 0, no_date = 0;
	string s, ss;
	
	cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++) {
		bool isG = 1;
		getline(cin, s);
		stringstream str(s);
 
		if(s[0] != 'G')
			isG = 0;
		
		while(str) {
			str >> ss;
			if(stringstream(ss) >> num) {
				if(isG) {
					if(num == 19 || num == 20)
						date += 2;
					else
						no_date += 2;
				} else {
					if(num == 19 || num == 20)
						date += 1;
					else
						no_date += 1;
				}
			}
			ss = "";
		}
	}
	if(date <= no_date || date == 0)
		cout << "No Date";
	else
		cout << "Date";
}