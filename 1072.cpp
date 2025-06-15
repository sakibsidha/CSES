#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n; cin >> n;
  for (ll i = 1; i <= n; ++i) {
    ll N = i * i, tot = N * (N - 1) / 2;
    ll two = (i - 2) * 2 + (i - 4), three = (i - 2) * 2, four = (i - 2) * (i - 4);
    cout << tot - (two * 2) - (three * 3) - (four * 4) - 4 << "\n";
  }

  return 0;
}
