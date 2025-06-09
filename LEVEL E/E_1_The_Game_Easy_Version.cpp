#include <bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fastIO;
    int t;
    cin >> t;  // Read number of test cases

    while (t--) {
        int n;
        cin >> n;  // Read number of nodes in the tree
        vector<int> w(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> w[i];  // Read the values of each node
        }

        vector<vector<int>> adj(n);
        
        for (int i = 0; i < n - 1; ++i) {
            int u, v;
            cin >> u >> v;  // Read edges
            u--; v--;  // Convert to zero-based index
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // Find the node with the maximum value
        int max_value = *max_element(w.begin(), w.end());
        
        // Now we need to find the first node with this maximum value
        int node_to_choose = -1;
        for (int i = 0; i < n; ++i) {
            if (w[i] == max_value) {
                node_to_choose = i + 1;  // Convert to one-based index
                break;
            }
        }

        // Output the result
        cout << node_to_choose << endl;
    }

    return 0;
}
