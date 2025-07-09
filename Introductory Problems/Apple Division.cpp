#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll mn = 1e18;
int n;
vector<int> v;

void f(int i, ll sum1, ll sum2) {
  if (i == n) {
    mn = min(mn, abs(sum1 - sum2));
    return;
  }
  f(i + 1, sum1 + v[i], sum2);
  f(i + 1, sum1, sum2 + v[i]);
}

void solve() {
  cin >> n;
  v.resize(n);
  for (auto &i : v) cin >> i;
  f(0, 0, 0);
  cout << mn << "\n";
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
