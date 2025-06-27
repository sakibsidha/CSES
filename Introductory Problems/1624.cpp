#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int board[8][8], ans = 0;
int diag_num[8][8], diag_num2[8][8];

void pre() {
  int cur = 0;
  for (int i = 7; i >= 0; --i) {
    int row = i, col = 0;
    while (row < 8 and col < 8) {
      diag_num[row][col] = cur;
      row++, col++;
    }
    cur++;
  }
  for (int i = 1; i <= 7; ++i) {
    int col = i, row = 0;
    while (row < 8 and col < 8) {
      diag_num[row][col] = cur;
      row++, col++;
    } 
    cur++;
  }
  cur = 0;
  for (int i = 0; i <= 7; ++i) {
    int row = 0, col = i;
    while (row < 8 and col >= 0) {
      diag_num2[row][col] = cur;
      row++, col--;
    }
    cur++;
  } 
  for (int i = 1; i <= 7; ++i) {
    int row = i, col = 7;
    while (row < 8 and col >= 0) {
      diag_num2[row][col] = cur;
      row++, col--;
    }
    cur++;
  }
}

int get_diag_num(int row, int col) {
  return diag_num[row][col];
}

int get_diag_num2(int row, int col) {
  return diag_num2[row][col];
}

bool possible(int row, int col, int col_mask, int diag_mask, int diag_mask2) {
  int num = get_diag_num(row, col), num2 = get_diag_num2(row, col);
  if ((col_mask & (1 << col)) != 0 or (diag_mask & (1 << num)) != 0 or (diag_mask2 & (1 << num2)) != 0)  return false;
  else return true;
}

void f(int row, int col_mask, int diag_mask, int diag_mask2) {
  if (row == 8) {
    ans++;
    return;
  }
  for (int col = 0; col < 8; ++col) {
    if (!board[row][col] and possible(row, col, col_mask, diag_mask, diag_mask2)) {
      f(row + 1, col_mask | (1 << col), diag_mask | (1 << get_diag_num(row, col)), diag_mask2 | (1 << get_diag_num2(row, col)));
    }
  }
}

void solve() {
  for (int i = 0; i < 8; ++i) {
    for (int j = 0; j < 8; ++j) {
      char x; cin >> x;
      if (x == '.') board[i][j] = 0;
      else board[i][j] = 1;
    }
  }  
  f(0, 0, 0, 0);
  cout << ans << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  pre();
  int tc = 1;
  //cin >> tc;
  while (tc--) {
    solve();
  }
}
