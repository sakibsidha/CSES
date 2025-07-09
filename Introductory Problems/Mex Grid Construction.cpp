#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int n; cin >> n;
  vector<vector<int>> v(n, vector<int>(n));
  vector<set<int>> row(n), col(n);
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      set<int> st;
      for (auto it : row[i]) st.insert(it);
      for (auto it : col[j]) st.insert(it);
      int mex = 0;
      while (st.count(mex)) mex++;
      v[i][j] = mex;
      row[i].insert(mex);
      col[j].insert(mex);
      cout << v[i][j] << " ";
    }
    cout << "\n";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  // int tc; cin >> tc;
  // while(tc--)
    solve();

  return 0;
}
