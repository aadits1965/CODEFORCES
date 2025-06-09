#include <iostream>
#include <vector>

using namespace std;

const long long MOD = 1e9 + 7;

// Function to calculate the Pisano period for a given k
int pisanoPeriod(int k) {
    int previous = 0;
    int current = 1;
    int period = 0;
    
    for (int i = 0; i < k * k; ++i) {
        int temp = (previous + current) % k;
        previous = current;
        current = temp;
        period++;

        // A Pisano period starts with 0, 1
        if (previous == 0 && current == 1) {
            return period;
        }
    }
    return period; // Should never reach here
}

// Function to find G(n, k)
long long G(long long n, int k) {
    int period = pisanoPeriod(k);
    
    // Store indices of Fibonacci numbers divisible by k
    vector<int> indices;
    long long previous = 0, current = 1;

    // Generate Fibonacci numbers mod k and track indices
    for (int i = 1; i <= period; ++i) {
        if (previous % k == 0) {
            indices.push_back(i);
        }
        int next = (previous + current) % k;
        previous = current;
        current = next;
    }

    // Total count of divisible Fibonacci numbers
    long long count = indices.size();
    long long total_count = (n / period) * count;

    // Add remaining Fibonacci numbers from the partial period
    long long remaining = n % period;
    for (int idx : indices) {
        if (idx <= remaining) {
            total_count++;
        }
    }

    return total_count % MOD;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        int k;
        cin >> n >> k;
        cout << G(n, k) << endl;
    }
    return 0;
}

