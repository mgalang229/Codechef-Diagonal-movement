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
		// check if the sum of 'x' and 'y' is even (meaning same parity)
		cout << ((x + y) % 2 == 0 ? "YES" : "NO") << '\n';
	}
	return 0;
}
