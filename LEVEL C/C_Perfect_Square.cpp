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
    vector<string> mat(n);
    for (int i = 0; i < n; ++i) {
      cin >> mat[i];
    }
    int ops = 0;
    for (int i = 0; i < n / 2; ++i) {
      for (int j = 0; j < n / 2; ++j) {
        char c1 = mat[i][j];
        char c2 = mat[j][n - 1 - i];
        char c3 = mat[n - 1 - i][n - 1 - j];
        char c4 = mat[n - 1 - j][i];
        char mx = max({c1, c2, c3, c4});
        ops += (mx - c1) + (mx - c2) + (mx - c3) + (mx - c4);
      }
    }
    cout << ops << "\n";
  }
  return 0;
}