#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<string> f(int n) {
  if (n == 1) return {"0", "1"};
  vector<string> cur, prev = f(n - 1);
  for (auto i : prev) cur.push_back("0" + i);
  reverse(prev.begin(), prev.end());
  for (auto i : prev) cur.push_back("1" + i);
  return cur;
}
void solve() {
  int n; cin >> n;
  vector<string> ans = f(n);
  for (auto i : ans) cout << i << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int tc = 1;
  //cin >> tc;
  while (tc--) {
    solve();
  }
}
