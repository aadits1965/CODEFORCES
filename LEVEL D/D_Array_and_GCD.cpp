#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
typedef long long int ll;
typedef vector<int> vi;
#define sortall(x) sort(x.begin(), x.end())
const int TARGET_PRIMES = 400000;
const int LIMIT = 6000000;
vector<int> primes; 
void compute_primes() {
  vector<bool> is_prime(LIMIT + 1, true);
  is_prime[0] = is_prime[1] = false;
  for (int i = 2; i <= LIMIT && primes.size() < TARGET_PRIMES; ++i) {
    if (is_prime[i]) {
      primes.push_back(i);
      for (long long j = 1LL * i * i; j <= LIMIT; j += i) {
        is_prime[j] = false;
      }
    }
  }
}

int main() {
  fastIO;
  compute_primes(); 
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vi arr(n);
    FOR(i, n) {
      cin >> arr[i];
    }
    sort(arr.rbegin(), arr.rend()); 
    ll d = 0;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
      d += arr[i] - primes[i];
      if (d < 0) {
        ans = n - i;
        break;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
