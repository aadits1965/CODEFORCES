#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> first(k + 1, -1), last(k + 1, -1);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (first[a[i]] == -1) first[a[i]] = i;
        last[a[i]] = i;
    }

    int minMoves = n;
    for (int i = 1; i <= k; i++) {
        if (first[i] != -1) {
            minMoves = min(minMoves, last[i] - first[i] + 1);
        }
    }

    cout << minMoves - 1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
