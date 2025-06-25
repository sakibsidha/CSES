#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int mod = 1e9 + 7;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
	
  int n; cin >> n;
  int ans = 1;
  for (int i = 0; i < n; ++i) {
    ans = ans * 2LL % mod;
  }
  cout << ans << "\n";
}
