#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int n; cin >> n;
  vector<int> v(n - 1);
  for (auto &i : v) cin >> i;
  sort(v.begin(), v.end());
  for (int i = 0; i < n - 1; ++i) {
    if (v[i] != i + 1) {
      cout << i + 1 << "\n";
      return;
    }
  }
  cout << n << "\n";
}

int32_t main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  // int tc; cin >> tc;
  // while (tc--)
    solve();

  return 0;
}
