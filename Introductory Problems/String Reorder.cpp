#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
	
  string s; cin >> s;
  int mode = 0, fq[26]{};
  for (int i = 0; i < (int) s.size(); ++i) {
    fq[s[i] - 'A']++;
  }
  string ans;
  for (int i = 0; i < (int) s.size(); ++i) {
    for (int ch = 0; ch < 26; ++ch) {
      if (fq[ch] and (ans.size() == 0 or char(ch + 'A') != ans.back())) { 
        fq[ch]--;
        int tot = 0, mx = 0;
        for (int j = 0; j < 26; ++j) {
          if (fq[j] > fq[mx]) mx = j;
          tot += fq[j];
        }
        if (fq[mx] <= (tot + 1) / 2) {
          ans.push_back(char(ch + 'A'));
          break;
        } else fq[ch]++;
      }
    }
    if (ans.size() != i + 1) {
      cout << -1 << "\n";
      return 0;
    }
  }
  cout << ans << "\n";
}
