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
void solve() {
  int n;
  string a, b;
  cin >> n >> a >> b;
  a.push_back('0');
  b.push_back('0');
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    cnt += (a[i] == '1') - (a[i] == '0');
    if((a[i] == b[i]) != (a[i + 1] == b[i + 1]) && cnt != 0) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int te;
  cin >> te;
  while(te--) {
    solve();
  }
}