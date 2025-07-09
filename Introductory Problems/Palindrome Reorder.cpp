#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
  string s; cin >> s;
  int a[26]{}, n = s.size();
  for (int i = 0; i < n; ++i) {
    a[s[i] - 'A']++;
  } 
  int odd = 0, odd_at = -1;
  for (int i = 0; i < 26; ++i) {
    if (a[i] & 1) {
      odd++, odd_at = i;
    }
  }
  if (odd > 1) {
    cout << "NO SOLUTION" << "\n";
    return;
  }
  deque<char> dq;
  if (odd_at != -1) {
    for (int i = 0; i < a[odd_at]; ++i) dq.push_back(char(odd_at + 'A'));
  }
  for (int i = 0; i < 26; ++i) {
    if (odd_at != -1 and i == odd_at) continue;
    int half = a[i] / 2;
    for (int j = 0; j < half; ++j) dq.push_back(char(i + 'A'));
    for (int j = 0; j < half; ++j) dq.push_front(char(i + 'A')); 
  }
  for (auto i : dq) cout << i;
  cout << "\n";
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
