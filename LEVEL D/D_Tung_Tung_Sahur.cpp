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

int main() {
  fastIO;
  int t;
  cin >> t;
  while (t--) {
    string p, s;
    cin >> p >> s;
    int i = 0, j = 0;
    bool ok = true;
    while (i < p.size() && j < s.size()) {
      if (p[i] != s[j]) {
        ok = false;
        break;
      }
      char ch = p[i];
      int cnt1 = 0, cnt2 = 0;
      while (i < p.size() && p[i] == ch) {
        cnt1++;
        i++;
      }
      while (j < s.size() && s[j] == ch) {
        cnt2++;
        j++;
      }
      if (cnt2 < cnt1 || cnt2 > 2 * cnt1) {
        ok = false;
        break;
      }
    }
    if (i != p.size() || j != s.size()) ok = false;
    cout << (ok ? "YES" : "NO") << endl;
  }
  return 0;
}
