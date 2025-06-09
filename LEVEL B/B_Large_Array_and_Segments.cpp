#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
typedef long long ll;
typedef vector<ll> vl;
#define all(x) x.begin(), x.end()
#define PB push_back
#define MP make_pair

int main() {
  fastIO;
  int t;
  cin >> t;
  while (t--) {
    int n;
    ll k, x;
    cin >> n >> k >> x;
    vl arr(n), presum(n + 1, 0), brr(n, 0);
    FOR(i, n) {
      cin >> arr[i];
    }
    FOR(i, n) {
      presum[i + 1] = presum[i] + arr[i];
    }
    ll T = presum[n];
    FOR(i, n) {
      ll remaining = presum[n] - presum[i];
      if (remaining >= x) {
        int low = i + 1, high = n, ans = n;
        while (low <= high) {
          int mid = (low + high) / 2;
          (presum[mid] - presum[i] >= x) ? (ans = mid, high = mid - 1) : (low = mid + 1);
        }
        brr[i] = ans - i;
      } 
      else {
        ll need = x - remaining, cycles = (need + T - 1) / T;
        ll base = (n - i) + (cycles - 1) * n;
        ll require = x - ((presum[n] - presum[i]) + (cycles - 1) * T);
        int j = lower_bound(all(presum), require) - presum.begin();
        brr[i] = base + j;
      }
    }
    ll ans = 0;
    FOR(i, n) {
      ll L = brr[i], maxVal = k * n - i - L;
      if (maxVal < 0) continue;
      ll maxJ = maxVal / n;
      ans += min(maxJ, k - 1) + 1;
    }
    cout << ans << "\n";
  }
  return 0;
}
