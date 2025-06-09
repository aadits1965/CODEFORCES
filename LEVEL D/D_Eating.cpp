#include <iostream>
#include <vector>
using namespace std;

int simulate_eating(const vector<int>& weights, int x) {
    int n = weights.size();
    int curr_pos = n - 1;  // Position of new slime
    int curr_weight = x;   // Weight of new slime
    int eaten = 0;         // Count of eaten slimes
    
    // While there are slimes to the left and we can eat them
    while(curr_pos >= 0 && curr_weight >= weights[curr_pos]) {
        curr_weight = curr_weight ^ weights[curr_pos];  // XOR weights
        eaten++;
        curr_pos--;
    }
    
    return eaten;
}

void solve() {
    int n, q;
    cin >> n >> q;
    
    vector<int> weights(n);
    for(int i = 0; i < n; i++) {
        cin >> weights[i];
    }
    
    // Process each query
    for(int i = 0; i < q; i++) {
        int x;
        cin >> x;
        cout << simulate_eating(weights, x);
        if(i < q-1) cout << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        solve();
    }
    
    return 0;
}