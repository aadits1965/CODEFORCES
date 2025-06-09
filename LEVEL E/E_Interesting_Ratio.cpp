#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
vector<bool> isPrime(1e7 + 1, true);

void seive() {
  isPrime[0] = isPrime[1] = false; 
  for (ll i = 2; i * i <= 1e7; i++) {
    if (isPrime[i]) { 
      for (ll j = i * i; j <= 1e7; j += i) {
        isPrime[j] = false;
      }
    }
  }
}

ll result(int n) {
  ll count = 0;
  for (int a = 1; a <= n; a++) {
    for (int p = 2; p * a <= n; p++) {  
      if (isPrime[p]) count++;
    }
  }
  return count;
}

int main() {
  fastIO;
  seive();  
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    cout << result(n) << endl;
  }
  return 0;
}
