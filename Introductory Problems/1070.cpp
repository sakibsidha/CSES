#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int n; cin >> n;
  if (n == 2 or n == 3) cout << "NO SOLUTION" << "\n";
  else if (n == 4) {
    cout << "3 1 4 2" << "\n";
  }
  else {
    for (int i = 1; i <= n; i += 2) cout << i << " ";
    for (int i = 2; i <= n; i += 2) cout << i << " ";
    cout << "\n";
  }
}

int32_t main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  // int tc; cin >> tc;
  // while (tc--)
    solve();

  return 0;
}
