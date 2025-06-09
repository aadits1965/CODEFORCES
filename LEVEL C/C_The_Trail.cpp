#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
int main() {
  fastIO;
  int t;
  cin >> t;  
  while (t--) {
    int r, c;
    cin >> r >> c;
    string path;
    cin >> path;
    long long grid[r+1][c+1];
    long long row_sum[r+1]{}, col_sum[c+1]{};
    memset(grid, 0, sizeof(grid));
    for (int i = 1; i <= r; i++) {
      for (int j = 1; j <= c; j++) {
        cin >> grid[i][j];
        row_sum[i] += grid[i][j];
        col_sum[j] += grid[i][j];
      }
    }
    int current_row = 1, current_col = 1;
    for (char move : path) {
      if (move == 'D') {
        long long adjustment = -row_sum[current_row];
        grid[current_row][current_col] = adjustment;
        row_sum[current_row] = adjustment + grid[current_row][current_col];
        col_sum[current_col] += adjustment;
        current_row++;
      } 
      else {
        long long adjustment = -col_sum[current_col];
        grid[current_row][current_col] = adjustment;
        col_sum[current_col] = adjustment + grid[current_row][current_col];
        row_sum[current_row] += adjustment;
        current_col++;
      }
    }
    grid[r][c] = -col_sum[c];
    for (int i = 1; i <= r; i++) {
      for (int j = 1; j <= c; j++) {
        cout << grid[i][j] << ' ';
      }
      cout << '\n';
    }
  }
  return 0;
}
