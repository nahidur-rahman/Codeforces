#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int res = 0;
	if (a < b)
        res++;
	if (a < c)
        res++;
	if (a < d)
        res++;
	cout << res << "\n";
}

int main() {
	int t;
	cin >> t;
	while (t--)
        solve();
}
