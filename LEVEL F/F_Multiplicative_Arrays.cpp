#include <iostream>
#include <vector>

#define MOD 998244353

using namespace std;

// Function to count the number of valid arrays where product of elements is x
long long countArrays(int x, int k, int n, vector<long long>& dp) {
    // dp[i] represents the number of ways to form product i with numbers <= k
    vector<long long> dpProd(x + 1, 0);
    dpProd[1] = 1;  // There's exactly one way to form product 1: an empty array or all 1's

    for (int i = 1; i <= k; i++) {
        for (int j = i; j <= x; j++) {
            dpProd[j] = (dpProd[j] + dpProd[j - i]) % MOD;
        }
    }

    return dpProd[x];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k, n;
        cin >> k >> n;

        vector<long long> result(k + 1, 0);

        // For each x = 1 to k, calculate the number of arrays whose product is x
        for (int x = 1; x <= k; ++x) {
            result[x] = countArrays(x, k, n, result);
        }

        // Output the results for this test case
        for (int x = 1; x <= k; ++x) {
            cout << result[x] << " ";
        }
        cout << endl;
    }

    return 0;
}
