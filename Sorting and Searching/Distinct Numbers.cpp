#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int n; cin >> n;
  set<ll> st;
  while (n--) {
    ll x; cin >> x;
    st.insert(x);
  }
  cout << st.size() << "\n";
}

int32_t main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  // int tc; cin >> tc;
  // while (tc--)
    solve();

  return 0;
}
