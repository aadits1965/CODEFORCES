#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
typedef long long int ll;
typedef vector<ll> vi;
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
    ll n; 
    cin >> n;
    vi arr(n); 
    FOR(i, n) cin >> arr[i];
    ll diff = arr[1] - arr[0];
    bool flag=true;
    FOR(i, n - 1) {
      if (arr[i + 1] - arr[i] != diff) {
        flag=false;
        break; 
      }
    }
    if(flag){
      ll y = arr[0] - diff;
      ll x = arr[0] + diff * n;
      if(y >= 0 && x >= 0 && y % (n+1) == 0) {
        flag=true;
      }
      else{
        flag=false;
      }
    }
    if(flag){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}