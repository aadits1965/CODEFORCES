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
bool check(long long i, long long a, long long b, long long c) {
  return c <= a * (i * (b / (i + 1)) + (b % (i + 1)));
}

long long find_min_i(long long a, long long b, long long c) {
  long long low = 1, high = c, ans = -1;
  while (low <= high) {
    long long mid = low + (high - low) / 2;
    if (check(mid, a, b, c)) { 
      ans = mid;
      high = mid - 1;
    } 
    else {
      low = mid + 1; 
    }
  }
  return ans;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long t;
  cin >> t;
  while (t--) {
    long long a, b, c;
    cin >> a >> b >> c;
    cout << find_min_i(a, b, c) << endl;
  }
}
