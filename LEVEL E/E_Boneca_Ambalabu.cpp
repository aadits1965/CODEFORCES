#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
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
  while(t--) {
    int n;
    cin >> n;
    vector<long long> arr(n);
    FOR(i, n) {
      cin >> arr[i];
    }
    vector<long long>arr2(30, 0);
    FOR(i, n) {
      FOR(j, 30) {
        if (arr[i] & (1 << j)) {
          arr2[j]++;
        }
      }
    }
    long long ans = 0;
    FOR(i, n) {
      long long sum = 0;
      FOR(j, 30) {
        if (arr[i] & (1LL << j)) {
          sum += (long long)(n - arr2[j]) * (1LL << j);
        } 
        else {
          sum += (long long)arr2[j] * (1LL << j);
        }
      }
      ans = max(ans, sum);
    }
    cout << ans << endl;
  }
  return 0;
}
