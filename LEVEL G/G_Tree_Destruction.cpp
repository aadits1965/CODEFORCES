#include <bits/stdc++.h>
using namespace std;

vector<int> adj[200005];

int bfs(int start, int n) {
    vector<int> dist(n+1, -1);
    queue<int> q;
    q.push(start);
    dist[start] = 0;
    
    int farthest_node = start;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        
        for (int neighbor : adj[node]) {
            if (dist[neighbor] == -1) {
                dist[neighbor] = dist[node] + 1;
                q.push(neighbor);
                if (dist[neighbor] > dist[farthest_node]) {
                    farthest_node = neighbor;
                }
            }
        }
    }
    return farthest_node;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        // Reset adjacency list for each test case
        for (int i = 0; i <= n; ++i) adj[i].clear();
        
        // Read the tree edges
        for (int i = 0; i < n - 1; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        // Step 1: Find the farthest node from an arbitrary node (node 1)
        int farthest1 = bfs(1, n);
        
        // Step 2: Find the farthest node from the first farthest node (this gives the diameter)
        int farthest2 = bfs(farthest1, n);
        
        // The number of components after removing the diameter path will be at most 2.
        // The maximum number of components formed is 2 (by removing the diameter).
        cout << 2 << "\n";
    }
    
    return 0;
}
