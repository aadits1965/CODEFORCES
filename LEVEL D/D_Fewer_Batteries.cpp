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
const int INF = 1e9 + 10;

bool canReach(int n, vector<vector<pair<int, int>>> &graph, vector<int> &b, int x) {
  vector<bool> visited(n + 1, false);
  vector<int> battery(n + 1, -1);
  queue<int> q;
  battery[1] = min(b[0], x); 
  q.push(1);
  while (!q.empty()) {
    int u = q.front(); q.pop();
    if (visited[u]) continue;
    visited[u] = true;
    for (auto &p : graph[u]) {
      int v = p.first;
      int w = p.second;
      if (w <= battery[u]) {
        int newBattery = min(x, battery[u] + b[v - 1]);
        if (newBattery > battery[v]) {
          battery[v] = newBattery;
          q.push(v);
        }
      }
    }
  }
  return visited[n];
}

int solveCase(int n, int m, vector<int> &b, vector<tuple<int, int, int>> &edges) {
  vector<vector<pair<int, int>>> graph(n + 1);
  int maxW = 0;
  for (auto &t : edges) {
    int u = std::get<0>(t);
    int v = std::get<1>(t);
    int w = std::get<2>(t);
    graph[u].emplace_back(v, w);
    maxW = max(maxW, w);
  }
  int lo = 0, hi = maxW, ans = -1;
  while (lo <= hi) {
    int mid = (lo + hi) / 2;
    if (canReach(n, graph, b, mid)) {
      ans = mid;
      hi = mid - 1;
    } 
    else {
      lo = mid + 1;
    }
  }
  return ans;
}

int main() {
  fastIO;
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<int> b(n);
    for (int i = 0; i < n; ++i) cin >> b[i];
    vector<tuple<int, int, int>> edges(m);
    for (int i = 0; i < m; ++i) {
      int u, v, w;
      cin >> u >> v >> w;
      edges[i] = {u, v, w};
    }
    cout << solveCase(n, m, b, edges) << '\n';
  }
  return 0;
}
