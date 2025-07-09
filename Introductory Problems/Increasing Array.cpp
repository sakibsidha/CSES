#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll n; cin >> n;
  ll a[n];
  for (auto &i : a) cin >> i;
  ll last = a[0], ans = 0;
  for (int i = 1; i < n; ++i) {
    if (a[i] < last) ans += (last - a[i]);
    else last = a[i];
  }
  cout << ans << "\n";
}

int32_t main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  // int tc; cin >> tc;
  // while (tc--)
    solve();

  return 0;
}
