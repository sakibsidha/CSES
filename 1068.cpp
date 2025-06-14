#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll n; cin >> n;
  while (n != 1) {
    cout << n << " ";
    if (n & 1) n = n * 3 + 1;
    else n /= 2;
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
