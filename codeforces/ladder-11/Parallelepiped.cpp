#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    double x, y, z;
    cin >> x >> y >> z;

    double a,b,c;
    a = x/y * z;
    a = sqrt(a);
    b = x / a;
    c = z / a;
    cout << 4 * (a + b + c);
}

