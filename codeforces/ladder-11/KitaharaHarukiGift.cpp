#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	cin >> n;
	unordered_map<int, int> m;
	int sum = 0;
	m[1] = 0;
	m[2] = 0;
	for(int i = 0; i < n; i++) {
		int w;
		cin >> w;
		w /= 100;
		sum += w;
		m[w]++;
	}
	
	if(sum & 1) {
		cout << "NO";
		return 0;
	}
	
	if(m[1] == m[2]) {
		cout << "YES";
		return 0;
	}
	
	if(!m[1] && m[2]) {
		if(m[2] % 2 == 0)
			cout << "YES";
		else
			cout << "NO";
		return 0;
	} else if(!m[2] && m[1]) {
		if(m[1] % 2 == 0)
			cout << "YES";
		else
			cout << "NO";
		return 0;
	}

	cout << "YES";
}
