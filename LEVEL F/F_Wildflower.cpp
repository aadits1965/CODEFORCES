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
const int MOD = 1e9 + 7;

vector<vector<int>> tree;
vector<int> sz;
bool ok;

int dfs(int u, int p, set<int>& seen) {
    int s = 1;
    for (int v : tree[u]) {
        if (v != p) {
            s += dfs(v, u, seen);
        }
    }
    if (seen.count(s)) ok = false;
    seen.insert(s);
    sz[u] = s;
    return s;
}

int solve(int n) {
    tree.assign(n+1, {});
    sz.assign(n+1, 0);
    for (int i = 0; i < n-1; ++i) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    ok = true;
    set<int> seen;
    dfs(1, 0, seen);
    if (!ok) return 0;
    int res = 1;
    for (int i = 0; i < n; ++i) res = (2LL * res) % MOD;
    return res;
}

int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    cout<<solve(n)<<endl;
  }
  return 0;
}