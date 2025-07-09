#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n;
  ll sum = 1LL * n * (n + 1) / 2;
  if (sum & 1) cout << "NO" << "\n";
  else {
    ll cur = 0, tar = sum / 2;
    map<int, bool> st1, st2;
    for (int i = n; i >= 1; --i) {
      if (cur < tar and i + cur <= tar) {
        cur += i;
        st1[i] = true;
      }
    }
    assert(cur == tar);
    for (int i = 1; i <= n; ++i) {
      if (!st1.count(i)) {
        st2[i] = true;
      }
    }
    cout << "YES" << "\n";
    cout << st1.size() << "\n";
    for (auto [x, y] : st1) {
      cout << x << " ";
    } cout << "\n";
    cout << st2.size() << "\n";
    for (auto [x, y] : st2) {
      cout << x << " ";
    } cout << "\n";
  }
}
