#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases
    
    while (t--) {
        int n;
        cin >> n;  // Number of columns
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];  // Number of inscriptions on the ith column
        }
        
        vector<int> ones, twos;
        
        // Identify the positions of columns with 1 inscription and 2 inscriptions
        for (int i = 0; i < n; ++i) {
            if (a[i] == 1) {
                ones.push_back(i);
            } else if (a[i] == 2) {
                twos.push_back(i);
            }
        }
        
        vector<pair<int, int>> moves;
        
        int i = 0, j = 0;
        
        // Perform moves from columns with 2 inscriptions to columns with 1 inscription
        while (i < ones.size() && j < twos.size()) {
            moves.push_back({twos[j] + 1, ones[i] + 1});
            a[twos[j]]--;
            a[ones[i]]++;
            
            if (a[twos[j]] == 1) {
                j++;
            }
            if (a[ones[i]] == 2) {
                i++;
            }
        }
        
        // Output the result for the current test case
        cout << moves.size() << endl;
        for (const auto& move : moves) {
            cout << move.first << " " << move.second << endl;
        }
    }
    
    return 0;
}
