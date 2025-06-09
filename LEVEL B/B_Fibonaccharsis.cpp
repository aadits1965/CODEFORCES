#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fib(int n) {
  if (n == 1 || n == 2) return 1;
  ll f1 = 1, f2 = 1, fn;
  for (int i = 3; i <= n; i++) {
    fn = f1 + f2;
    f1 = f2;
    f2 = fn;
  }
  return fn;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t; cin >> t;
  while (t--) {
    ll n; int k;
    cin >> n >> k;
    if(k>28){
      cout<<"0"<<endl;
      continue;
    }
    ll a = fib(k - 2);
    ll b = fib(k - 1);
    cout<<a<<" "<<b<<endl;
    ll count = 0;
    ll max_i = n / a;
    for (ll i = 0; i <= max_i; i++) {
      ll rem = n - a * i;
      if (rem < 0) break;
      if (rem % b == 0) {
        ll j = rem / b;
        if (j >= i && j <= n) {
          cout<<i<<" "<<j<<endl;
          count++;
        }
      }
    }
    cout << count << '\n';
  }
  return 0;
}
