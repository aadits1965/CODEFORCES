#include <bits/stdc++.h>
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
const int MAX_NODES = 2e5 + 5;
bool visitedGraph1[MAX_NODES], visitedGraph2[MAX_NODES];
int componentCountGraph1, componentCountGraph2, n, edgesInGraph1, edgesInGraph2, componentLabel[MAX_NODES];
vector<int> adjListGraph1[MAX_NODES], adjListGraph2[MAX_NODES];
map<pair<int, int>, int> edgeStatus;

void dfsGraph2(int node) {
    componentLabel[node] = componentCountGraph1;
    visitedGraph2[node] = true;
    for (int neighbor : adjListGraph2[node]) {
        if (!visitedGraph2[neighbor]) {
            dfsGraph2(neighbor);
        }
    }
}

void dfsGraph1(int node) {
    visitedGraph1[node] = true;
    for (int neighbor : adjListGraph1[node]) {
        if (!visitedGraph1[neighbor] && edgeStatus[{node, neighbor}] != 1) {
            dfsGraph1(neighbor);
        }
    }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    cin >> n >> edgesInGraph1 >> edgesInGraph2;
    componentCountGraph1 = 0;
    componentCountGraph2 = 0;
    edgeStatus.clear();
    FOR(i,n){
      adjListGraph1[i].clear();
      adjListGraph2[i].clear();
      visitedGraph1[i] = false;
      visitedGraph2[i] = false;
    }
    FOR(i,edgesInGraph1){
      int u, v;
      cin >> u >> v;
      u--, v--;
      adjListGraph1[u].push_back(v);
      adjListGraph1[v].push_back(u);
    }
    FOR(i,edgesInGraph2){
      int u, v;
      cin >> u >> v;
      u--, v--;
      adjListGraph2[u].push_back(v);
      adjListGraph2[v].push_back(u);
    }
    FOR(i,n){
      if (!visitedGraph2[i]) {
        componentCountGraph1++;
        dfsGraph2(i);
      }
    }
    int result = 0;
    FOR(i,n){
      for (int neighbor : adjListGraph1[i]) {
        if (componentLabel[i] != componentLabel[neighbor]) {
          result++;
          edgeStatus[{i, neighbor}] = 1;
        }
      }
    }
    FOR(i,n){
      if (!visitedGraph1[i]) {
        componentCountGraph2++;
        dfsGraph1(i);
      }
    }
    cout << result / 2 + (componentCountGraph2 - componentCountGraph1) << endl;
  }
  return 0;
}
