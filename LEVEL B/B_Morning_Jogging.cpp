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
int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> grid(n, vector<int>(m));
    vector<vector<int>> res(n, vector<int>(m,-1));
    for (int i = 0; i < n; ++i){
      for (int j = 0; j < m; ++j){
        cin >> grid[i][j];
      }
    }
    vi arr;
    for (int i = 0; i < n; ++i){
      for (int j = 0; j < m; ++j){
        arr.PB(grid[i][j]);
      }
    }
    sortall(arr);
    set<int>s;
    FOR(i,m){
      s.insert(arr[i]);
    }
    map<int, int> freq;
    for (int x : arr) {
      if (s.count(x)) freq[x]++;
    }
    for (int col = 0; col < m; ++col) {
      int selected = arr[col];
      bool placed = false;
      for (int row = 0; row < n && !placed; ++row) {
        for (int j = 0; j < m; ++j) {
          if (grid[row][j] == selected && res[row][col] == -1) {
            res[row][col] = selected;
            grid[row][j] = -1;
            freq[selected]--;
            if (freq[selected] == 0) s.erase(selected);
            placed = true;
            break;
          }
        }
      }
    }
    for (int i = 0; i < n; ++i){
      int k = 0;
      for (int j = 0; j < m; ++j){
        if (res[i][j] == -1){
          while (grid[i][k] == -1) k++;
          res[i][j] = grid[i][k];
          k++;
        }
      }
    }
    for (int i = 0; i < n; ++i){
      for (int j = 0; j < m; ++j){
        cout << res[i][j] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}