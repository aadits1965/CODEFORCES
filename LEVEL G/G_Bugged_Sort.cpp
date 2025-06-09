#include <bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fastIO;
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        
        // Combine a and b into one vector
        vector<int> combined = a;
        combined.insert(combined.end(), b.begin(), b.end());
        
        // Sort the combined vector
        sort(combined.begin(), combined.end());
        
        // Split the sorted vector into two halves
        vector<int> sorted_a(combined.begin(), combined.begin() + n);
        vector<int> sorted_b(combined.begin() + n, combined.end());
        
        // Check if both halves are individually sorted
        bool possible = true;
        
        for (int i = 1; i < n; ++i) {
            if (sorted_a[i] < sorted_a[i - 1] || sorted_b[i] < sorted_b[i - 1]) {
                possible = false;
                break;
            }
        }
        
        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
