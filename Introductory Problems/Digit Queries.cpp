#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<ll> v;
 
void pre() {
  v.push_back(9);
  for (ll i = 10, sum = 9, dig = 2; sum <= 1e18; i *= 10, ++dig) {
    v.push_back((9 * i) * dig);
    sum += v.back();
  } 
}
 
void solve(ll k) {
  ll id = -1, bef = 0;
  for (int i = 0; i < v.size(); ++i) {
    if (bef + v[i] >= k) {
      id = i;
      break;
    } else bef += v[i];
  }
  ll x = k - bef, dig = id + 1, block = (x + dig - 1) / dig, start = 1;
  for (ll i = 1; i <= id; ++i) start *= 10;
  start += (block - 1), x -= (block - 1) * dig;
  string s = to_string(start);
  cout << s[x - 1] << "\n";
}
 
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
	
  pre();
  int q; cin >> q;
  while (q--) {
    ll k; cin >> k;
    solve(k);
  }
 }
