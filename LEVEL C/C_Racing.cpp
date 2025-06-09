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
int main() {
  fastIO;
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vi arr(n);
    FOR(i,n) {
      cin >> arr[i];
    }
    vi left(n), right(n);
    FOR(i,n) {
      cin >> left[i] >> right[i];
    }
    vector<pi> range(n + 1); 
    range[0] = {0, 0};
    bool ok = true;
    FOR(i,n) {
      int minimum, maximum;
      if (arr[i] == 0) {
        minimum = range[i].F;
        maximum = range[i].S;
      } 
      else if (arr[i] == 1) {
        minimum = range[i].F + 1;
        maximum = range[i].S + 1;
      } 
      else { 
        minimum = range[i].F;
        maximum = range[i].S + 1;
      }
      minimum = max(minimum, left[i]);
      maximum = min(maximum, right[i]);
      if (minimum > maximum){
        ok = false;
        break;
      }
      range[i + 1] = {minimum, maximum};
    }
    if (!ok) {
      cout << -1 << '\n';
      continue;
    }
    vi height(n + 1);
    height[n] = range[n].F;
    for (int i = n - 1; i >= 0; --i) {
      if (arr[i] != -1) {
        height[i] = height[i + 1] - arr[i];
      } 
      else {
        if (height[i + 1] - 1 >= range[i].F) {
          arr[i] = 1;
          height[i] = height[i + 1] - 1;
        } 
        else {
          arr[i] = 0;
          height[i] = height[i + 1];
        }
      }
    }
    FOR(i,n) {
      cout << arr[i] << " ";
    }
    cout << '\n';
  }
  return 0;
}
