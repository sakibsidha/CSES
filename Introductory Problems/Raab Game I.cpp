#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int n, a, b; cin >> n >> a >> b;
  if (a + b > n) {
    cout << "NO" << "\n";
    return;
  }
  int d = n - (a + b);
  vector<int> A, B;
  for (int i = n, c = 0; c < d; ++c, --i) {
    A.push_back(i);
    B.push_back(i);
  }
  for (int i = b + 1, j = 1, c = 0; c < a; ++c, ++i, ++j) {
    A.push_back(i);
    B.push_back(j);
  }
  for (int i = a + 1, j = 1, c = 0; c < b; ++c, ++i, ++j) {
    A.push_back(j);
    B.push_back(i);
  }
  int cnt_a = 0, cnt_b = 0;
  for (int i = 0; i < A.size(); ++i) {
    if (A[i] > B[i]) cnt_a++;
    else if (A[i] < B[i]) cnt_b++;
  }
  if (cnt_a != a or cnt_b != b) {
    cout << "NO" << "\n";
    return;
  }
  cout << "YES" << "\n";
  for (int i = 0; i < A.size(); ++i) {
    cout << A[i] << " ";
  } cout << "\n";
  for (int i = 0; i < B.size(); ++i) {
    cout << B[i] << " ";
  } cout << "\n";
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
