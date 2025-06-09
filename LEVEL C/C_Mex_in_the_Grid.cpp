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
    int n;
    cin >> n;
    vector<vi> arr(n, vi(n, 0));
    int value = 0;
    FOR(i,(n+1)/2){
      int r1 = i, r2 = n - 1 - i, c1 = i, c2 = n - 1 - i;
      for (int c = c1; c <= c2; c++) {
        arr[r1][c] = value++;
      }
      for (int r = r1 + 1; r <= r2; r++) {
        arr[r][c2] = value++;
      }
      if (r1 < r2) {
        for (int c = c2 - 1; c >= c1; c--) {
          arr[r2][c] = value++;
        }
      }
      if (c1 < c2) {
        for (int r = r2 - 1; r > r1; r--) {
          arr[r][c1] = value++;
        }
      }
    }
    FOR(i, n) {
      FOR(j, n) {
        arr[i][j] = n*n-1-arr[i][j];
      }
    }
    FOR(i, n) {
      FOR(j, n) {
        cout << arr[i][j] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}