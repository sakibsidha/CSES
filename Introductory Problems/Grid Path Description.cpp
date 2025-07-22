#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool board[9][9];
string s;
int p[48];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int f(int i, int j, int idx) {
  if ((!board[i - 1][j] and !board[i + 1][j]) and board[i][j - 1] and board[i][j + 1]) return 0;
  if ((board[i - 1][j] and board[i + 1][j]) and !board[i][j - 1] and !board[i][j + 1]) return 0;

  if (i == 7 and j == 1) return idx == 48 ? 1 : 0;
  if (idx == 48) return 0;

  int x = 0;
  board[i][j] = false;  

  if (p[idx] < 4) {
    int ni = i + dx[p[idx]], nj = j + dy[p[idx]];
    if (board[ni][nj]) x += f(ni, nj, idx + 1);
  } else {
    for (int k = 0; k < 4; ++k) {
      int ni = i + dx[k], nj = j + dy[k];
      if (board[ni][nj]) x += f(ni, nj, idx + 1);
    }
  }

  board[i][j] = true;
  return x;
}

void solve() {
  for (int i = 1; i <= 7; ++i) {
    for (int j = 1; j <= 7; ++j) {
      board[i][j] = true;
    }
  }

  cin >> s;
  for (int i = 0; i < 48; ++i) {
    if (s[i] == 'U') p[i] = 0;
    else if (s[i] == 'D') p[i] = 1;
    else if (s[i] == 'L') p[i] = 2;
    else if (s[i] == 'R') p[i] = 3;
    else p[i] = 4;
  }
  cout << f(1, 1, 0) << "\n";
}

int32_t main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  solve();

  return 0;
}
