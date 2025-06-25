#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<pair<int, int>> ans;

void f(int n, int from, int mid, int to) {
  if (n == 1) {
    ans.push_back({from, to});
    return;
  }
  f(n - 1, from, to, mid);
  ans.push_back({from, to});
  f(n - 1, mid, from, to);
}

void solve() {
  int n; cin >> n;
  f(n, 1, 2, 3);
  cout << ans.size() << "\n";
  for (auto [fi, se] : ans) {
    cout << fi << ' ' << se << '\n';
  }
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
