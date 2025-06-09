#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(a, c) for (int (a) = 0; (a) < (c); (a)++)
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

void solve() {
  int n, d;
  cin >> n >> d;
  string s;
  cin >> s;
  FOR(i, n) {
    if (s[i] - '0' >= d) {
      cout << s[i];
    } 
    else {
      cout << d;
      for (int j = i; j < n; j++) {
        cout << s[j];
      }
      cout << endl;
      return;
    }
  }
  cout << d << "\n";
}

int main() {
  fastIO;
  int t;
  cin >> t;
  FOR(_, t) {
    solve();
  }
  return 0;
}
