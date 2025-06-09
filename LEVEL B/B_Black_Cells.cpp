#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
typedef long long int ll;
typedef vector<ll> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
int main() {
  fastIO;
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; ++i) {
      cin >> arr[i];
    }
    if (n == 1) {
      cout << 1 << endl;
      continue;
    }
    if (n == 2) {
      cout << arr[1] - arr[0] << endl;
      continue;
    }
    ll ans = LLONG_MAX;
    if (n % 2 == 0) {
      ll maximum = 0;
      for (int i = 0; i + 1 < n; i += 2) {
        maximum = max(maximum, arr[i + 1] - arr[i]);
      }
      ans = maximum;
    } 
    else {
      for (int skip = 0; skip < n; ++skip) {
        ll maximum = 0;
        bool valid = true;
        for (int i = 0; i < n; ) {
          if (i == skip) {
            ++i;
            continue;
          }
          if (i + 1 == skip) {
            ++i;
            continue;
          }
          if (i + 1 >= n) {
            valid = false;
            break;
          }
          maximum = max(maximum, arr[i + 1] - arr[i]);
          i += 2;
        }
        if (valid) {
          ans = min(ans, maximum);
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
