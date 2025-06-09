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

int f(int val, int n) {
  return val - 1 + ceil(1.0*(n-val)/val);  
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int low = 1, high = n;
    int ans = INT_MAX;
    for(int i=1;i<=sqrt(n);i++){
      ans=min(ans,f(i,n));
    }
    cout << ans << '\n';
  }
  return 0;
}
