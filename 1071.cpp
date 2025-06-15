#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll row, col; cin >> row >> col;
  ll lvl = max(row, col), n = lvl - 1, sum = n * n, begin = sum + 1, end = begin + n * 2;
  if (lvl == row) {
    if (lvl & 1) cout << begin + col - 1 << "\n";
    else cout << end - col + 1 << "\n";
  } else {
    if (lvl % 2 == 0) cout << begin + row - 1 << "\n";
    else cout << end - row + 1 << "\n";
  }
}

int32_t main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int tc; cin >> tc;
  while (tc--)
    solve();

  return 0;
}
