#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b;
	cin >> a >> b;
	int ans = 0;
	while (a >= b) {
		// remove the excess candles (for now)
		int temp = a % b;
		a -= temp;
		ans += a; // add the current no. of candles to the answer
		a /= b; // light up new candles
		a += temp; // after lighting up new candles, return the excess candles
	}
	// if there are remaining candles, add it to the answer
	ans += a;
	cout << ans << '\n';
	return 0;
}
