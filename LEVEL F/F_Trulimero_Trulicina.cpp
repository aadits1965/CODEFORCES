#include <bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(i, n) for (int i = 0; i < (n); i++)
#define vi vector<int>
#define vvi vector<vi>
#define PB push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
typedef long long ll;

int main() {
  fastIO;
  int t;
  cin >> t;
  while (t--) {
    int n, m, k;
    cin >> n >> m >> k;
    if(m%k){
      vector<vector<int>> grid(n, vector<int>(m, 0));
      int currentNum = 1;
      FOR(i, n) {
        FOR(j, m) {
          grid[i][j] = currentNum;
          currentNum = (currentNum % k) + 1;  
        }
      }
      FOR(i, n) {
        FOR(j, m) {
          cout << grid[i][j] << " ";
        }
        cout << endl;
      }
    }
    else{
      FOR(i, n) {
        FOR(j, m) {
          cout << ((j + i) % k) + 1 << " ";
        }
        cout << endl;
      }
    }
  }
  return 0;
}
