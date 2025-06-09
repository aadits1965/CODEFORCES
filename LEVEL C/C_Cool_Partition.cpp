#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
typedef vector<ll> vi;
#define PB push_back
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))

int main() {
    fastIO;
    int t; 
    cin >> t;
    while (t--) {
      int n; 
      cin >> n;
      vi arr(n), prefixUnique(n);
      set<ll> seen;
      FOR(i, n) {
        cin >> arr[i];
        seen.insert(arr[i]);
        prefixUnique[i] = seen.size();
      }
      ll cnt = 0;
      set<ll> segment;
      for (int i = n - 1; i >= 0;) {
        segment.clear();
        int target = prefixUnique[i];
        int j = i;
        while (j >= 0 && segment.size() < target) {
          segment.insert(arr[j]);
          j--;
        }
        if (segment.size() == target) {
          cnt++;
        }
        i = j;
      }
      cout << cnt << "\n";
    }
    return 0;
}
