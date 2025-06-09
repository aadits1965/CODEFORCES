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
#define MOD 998244353
#define sz(x) ((int)(x).size())
void solve() {
  int n, m, d;
  cin >> n >> m >> d;  
    vector<string> grid(n);
    for (int i = 0; i < n; i++) cin >> grid[i];
    
    int H = sqrt(d * d - 1);
    vector<vi> holds(n);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'X') holds[i].PB(j);
        }
    }
    
    if (any_of(all(holds), [](const vi& row) { return row.empty(); })) {
        cout << 0 << endl;
        return;
    }
    
    vector<vi> dp(n, vi(m, 0));
    vi arr = holds[n - 1];
    
    for (int c : arr) {
        int lo = c - d, hi = c + d;
        int l = lower_bound(all(arr), lo) - arr.begin();
        int r = upper_bound(all(arr), hi) - arr.begin();
        dp[n - 1][c] = (r - l) % MOD;
    }
    
    for (int i = n - 2; i >= 0; i--) {
        vi& dp_next = dp[i + 1];
        vi P(m + 1, 0);
        for (int j = 0; j < m; j++) P[j + 1] = (P[j] + dp_next[j]) % MOD;

        unordered_map<int, int> F_val;
        for (int c : holds[i]){
            if(0LL>c-H){
                F_val[c] = (P[min(m, c + H + 1)] - P[0LL] + MOD) % MOD;
            }
            else{
              F_val[c] = (P[min(m, c + H + 1)] - P[c-H] + MOD) % MOD;
            }
          }
        arr = holds[i];
        vi A, A_pref(sz(arr) + 1, 0);
        for (int c : arr) A.PB(F_val[c]);

        for (int j = 0; j < sz(A); j++)
            A_pref[j + 1] = (A_pref[j] + A[j]) % MOD;

        for (int j = 0; j < sz(arr); j++) {
            int x = arr[j], lo = x - d, hi = x + d;
            int l = lower_bound(all(arr), lo) - arr.begin();
            int r = upper_bound(all(arr), hi) - arr.begin();
            dp[i][x] = (A_pref[r] - A_pref[l] + MOD) % MOD;
        }
    }

    int res = 0;
    for (int c : holds[0]) res = (res + dp[0][c]) % MOD;
    cout << res << endl;
}

int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}


