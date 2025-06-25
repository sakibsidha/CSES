#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  string s; cin >> s;
  sort(s.begin(), s.end());
  set<string> st;
  do {  
    st.insert(s);
  } while (next_permutation(s.begin(), s.end()));
  cout << st.size() << "\n";
  for (auto i : st) {
    cout << i << "\n";
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
