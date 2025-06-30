#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int R, C; cin >> R >> C;
  vector<string> v(R), t = {"BCD", "ACD", "ABD", "ABC"};
  for (auto &i : v) cin >> i;
  for (int i = 0; i < R; ++i) {
    for (int j = 0; j < C; ++j) {
      for (auto ch : t[v[i][j] - 'A']) {
        if ((i - 1 < 0 or v[i - 1][j] != ch) and (j - 1 < 0 or v[i][j - 1] != ch)) {
          v[i][j] = ch;
          break;
        }
      }
      cout << v[i][j];
    } cout << "\n";
  }
}  

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	// int tc; cin >> tc;
	// while(tc--)
		solve();

	return 0;
}
