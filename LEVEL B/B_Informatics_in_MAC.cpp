#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef vector<int> vi;
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)

vector<int> compute_preMEX(const vector<int>& a) {
  int n = a.size();
  vector<int> premex(n);
  unordered_set<int> seen;
  int mex = 0;
  for (int i = 0; i < n; ++i) {
    seen.insert(a[i]);
    while (seen.count(mex)) ++mex;
    premex[i] = mex;
  }
  return premex;
}

vector<int> compute_sufMEX(const vector<int>& a) {
  int n = a.size();
  vector<int> suf(n);
  unordered_set<int> seen;
  int mex = 0;
  for (int i = n - 1; i >= 0; --i) {
    seen.insert(a[i]);
    while (seen.count(mex)) ++mex;
    suf[i] = mex;
  }
  return suf;
}

int main() {
  fastIO;
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vi arr(n);
    FOR(i, n){ 
      cin >> arr[i];
    }
    vi pre = compute_preMEX(arr);
    vi suf = compute_sufMEX(arr);
    bool found = false;
    for (int i = 0; i < n - 1; ++i) {  
      if (pre[i] == suf[i + 1]) {
        cout << 2 << "\n";
        cout << 1 << " " << i + 1 << "\n";
        cout << i + 2 << " " << n << "\n";
        found = true;
        break;
      }
    }
    if (!found) cout << -1 << "\n";
  }
  return 0;
}
