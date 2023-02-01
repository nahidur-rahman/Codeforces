#include<bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		int k = min(max(2 * a, b), max(a, 2 * b));
		cout << k * k << '\n';
	}
    return 0;
}
