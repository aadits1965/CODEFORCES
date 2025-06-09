#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findSmallestRotation(const vector<int>& a) {
    int n = a.size();
    vector<int> result = a;
    
    // Try all possible rotations and choose the lexicographically smallest
    for (int i = 0; i < n; ++i) {
        vector<int> rotated;
        
        // Create a rotated version starting from index `i`
        for (int j = i; j < n; ++j) rotated.push_back(a[j]);
        for (int j = 0; j < i; ++j) rotated.push_back(a[j]);
        
        // Update result if the new rotated array is smaller
        if (rotated < result) {
            result = rotated;
        }
    }
    
    return result;
}

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Length of the array
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Find the lexicographically smallest array after any number of operations
        vector<int> result = findSmallestRotation(a);

        // Print the result for this test case
        for (int i = 0; i < n; ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
