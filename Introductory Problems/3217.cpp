#include <bits/stdc++.h>
using namespace std;
using ll = long long;

pair<int, int> moves[] = {{-2, -1}, {-1, -2}, {-2, 1}, {-1, 2}, {2, 1}, {1, 2}, {1, -2}, {2, -1}};

void solve(){
	int n; cin >> n;
	vector<vector<int>> v(n, vector<int>(n, -1));
	queue<pair<int, int>> q;
	q.push({0, 0});
	v[0][0] = 0;
	while (!q.empty()) {
		pair<int, int> p = q.front();
		q.pop();
		for (int i = 0; i < 8; ++i) {
			int x = p.first + moves[i].first;
			int y = p.second + moves[i].second;
			if (x >= 0 and x < n and y >= 0 and y < n and v[x][y] == -1) {
				q.push({x, y});
				v[x][y] = v[p.first][p.second] + 1;
			}
		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << v[i][j] << " ";
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
