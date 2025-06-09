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
    vector<string> matrix(n);
    FOR(i,n) {
      cin >> matrix[i];
    }
    vi indices(n);
    iota(all(indices), 0);
    sort(all(indices), [&](int u, int v) {
    if (u < v) {
      return matrix[u][v] == '1';
    }
    return matrix[v][u] == '0';
    });
    FOR(i,n){
      cout << indices[i] + 1;
      if (i != n - 1) cout << " ";
    }
    cout << "\n";
  }
  return 0;
}