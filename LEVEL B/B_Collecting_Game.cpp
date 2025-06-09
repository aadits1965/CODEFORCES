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
int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    int n;
    cin >> n;
    vector<pi> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i].first;
      arr[i].second = i;
    }
    sort(arr.begin(), arr.end());
    vector<ll> prefix(n);
    prefix[0] = arr[0].first;
    for (int i = 1; i < n; i++) {
      prefix[i] = prefix[i - 1] + arr[i].first;
    }
    vector<int> ans(n);
    int reach = 0;
    for (int i = 0; i < n; i++) {
      if (reach < i) {
        reach = i;
      }
      while (reach + 1 < n && prefix[reach] >= arr[reach + 1].first) {
        reach++;
        prefix[reach] = prefix[reach - 1] + arr[reach].first;
      }
      ans[arr[i].second] = reach;
    }
    for (int i = 0; i < n; i++) {
      cout << ans[i] << " ";
    }
    cout << '\n';
  }
  return 0;
}