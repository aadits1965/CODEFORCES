#include <iostream>
#include <cmath>
using namespace std;

void solve() {
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        long long x, y, z, k;
        cin >> x >> y >> z >> k; // Read parameters
        
        // Minimum coins needed
        long long minCoins = 1e18;
        
        // Iterate over possible damage increases
        for (long long m = 0; m <= z; m += k) {
            // Damage we can achieve with m increases
            long long damage = m;
            long long attacksNeeded = (z + damage - 1) / damage; // Ceiling division for attacks
            
            // Calculate total coins spent
            long long coinsSpent = (m * x) + (attacksNeeded * y);
            minCoins = min(minCoins, coinsSpent);
        }
        
        cout << minCoins << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); // For faster input/output
    solve();          // Execute the solution
    return 0;
}
