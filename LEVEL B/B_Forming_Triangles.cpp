#include <bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

ll nCr3(ll n) {
  if (n < 3) return 0;
  return n * (n - 1) * (n - 2) / 6;
}

ll nCr2(ll n) {
  if (n < 2) return 0;
  return n * (n - 1) / 2;
}

int main() {
  fastIO;
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vi arr(n);
    map<int, int> freq;
    set<int> unique_vals;
    for (int i = 0; i < n; ++i) {
      cin >> arr[i];
      freq[arr[i]]++;
      unique_vals.insert(arr[i]);
    }
    ll count = 0;
    ll smaller = 0;
    for (int val : unique_vals) {
      ll f = freq[val];
      count += nCr3(f);            
      count += nCr2(f) * smaller;  
      smaller += f;                  
    }
    cout << count << '\n';
  }
  return 0;
}
