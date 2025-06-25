#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	ll n; cin >> n;
	ll ans = 0;
	for (ll i = 5; i <= n; i *= 5) {
		ans += (n / i);
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

 	int tc = 1;
 	// cin >> tc;
	for (int i = 0; i < tc; ++i) {
		solve();
	}
}

