#include <bits/stdc++.h>
using namespace std;

// Function to generate a permutation
vector<int> generatePermutation(int n) {
    vector<int> perm(n);
    int left = 1, right = 2;

    for (int i = 0; i < n; i += 2) {
        perm[i] = left++;
    }
    for (int i = 1; i < n; i += 2) {
        perm[i] = right++;
    }

    return perm;
}

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> result = generatePermutation(n);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}
