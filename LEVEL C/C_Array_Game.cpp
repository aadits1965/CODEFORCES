#include <bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define int long long
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))

signed main() {
    fastIO;
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        if (k >= 3) {
            cout << "0\n";
            continue;
        }

        sortall(a);
        int d = a[0];

        for (int i = 0; i < n - 1; i++) d = min(d, a[i + 1] - a[i]);

        if (k == 1) {
            cout << d << "\n";
            continue;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                int v = a[i] - a[j];
                int p = lower_bound(all(a), v) - a.begin();
                if (p < n) d = min(d, a[p] - v);
                if (p > 0) d = min(d, v - a[p - 1]);
            }
        }
        cout << d << "\n";
    }
}
