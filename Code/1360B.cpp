#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (auto &x: a)
            cin >> x;
		sort(a.begin(), a.end());
		int ans = 100000;
		for (int i = 1; i < n; i++)
            ans = min(ans, a[i] - a[i - 1]);
		cout << ans << '\n';
	}
    return 0;
}
