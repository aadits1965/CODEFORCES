#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
typedef long long int ll;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
const int MOD = 998244353;

ll factorial(int n) {
  ll result = 1;
  for (int i = 2; i <= n; ++i)
    result = (result * i) % MOD;
  return result;
}

int main() {
  fastIO;
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    vi group_lengths;
    ll n = s.size();
    ll count = 1;
    for (int i = 1; i < n; ++i) {
      if (s[i] == s[i - 1]) {
        count++;
      } 
      else {
        if (count > 1) group_lengths.push_back(count);
        count = 1;
      }
    }
    if (count > 1) group_lengths.push_back(count);
    ll sum = 0;
    ll ans = 1;
    FOR(i, group_lengths.size()) {
      sum += (group_lengths[i] - 1);
      ans=((ans*group_lengths[i])%MOD);
    }
    cout << sum << " " << (ans*factorial(sum)%MOD) << "\n";
    }
    return 0;
}
