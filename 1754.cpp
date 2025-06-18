#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int a, b; cin >> a >> b;
  if ((a + b) % 3 == 0 and a <= 2 * b and b <= 2 * a) cout << "YES" << "\n";
  else cout << "NO" << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int tc = 1;
  cin >> tc;
  while (tc--) {
    solve();
  }
}
