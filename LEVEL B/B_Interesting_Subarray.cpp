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
    cin>>n;
    vi arr(n);
    FOR(i,n){
      cin>>arr[i];
    }
    bool found = false;
    for (int i = 0; i < n - 1; i++) {
      if (abs(arr[i] - arr[i + 1]) >= 2) {
        cout << "YES\n";
        cout << i + 1 << " " << i + 2 << "\n"; 
        found = true;
        break;
      }
    }
    if (!found) {
      cout << "NO\n";
    }
  }
  return 0;
}