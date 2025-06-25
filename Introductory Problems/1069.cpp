#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  string s; cin >> s;
  int n = s.size();
  int ans = 0;
  for (int l = 0, r = 0; l < n; l = r) {
    while (r < n and s[l] == s[r]) r++;
    ans = max(ans, r - l);
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
