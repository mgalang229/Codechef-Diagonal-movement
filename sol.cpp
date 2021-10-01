#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x, y;
		cin >> x >> y;
		// the parity of 'x' and 'y' should be the same
		cout << (abs(x) % 2 == abs(y) % 2 ? "YES" : "NO") << '\n';
	}
	return 0;
}
