#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
typedef long long int ll;
typedef vector<int> vi;

int main() {
  fastIO;
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vi arr(n);
    FOR(i, n) {
      cin >> arr[i];
    }
    map<int, int> freq;
    for (int x : arr) {
      freq[x % m]++;
    }
    int ans = 0;
    if (freq[0]) ans++;
    for (int i = 1; i <= m / 2; i++) {
      if (i == m - i) {
        if (freq[i]) ans++;
      } 
      else {
        int a = freq[i];
        int b = freq[m - i];
        if (a == 0 && b == 0) continue;
        int diff = abs(a - b);
        ans += 1 + max(0, diff - 1);
        freq[i] = freq[m - i] = 0; 
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
