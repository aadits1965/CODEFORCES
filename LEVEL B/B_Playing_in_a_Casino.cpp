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
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>arr(n,vector<ll>(m));
    FOR(i,n){
      FOR(j,m){
        cin>>arr[i][j];
      }
    }
    ll ans=0;
    FOR(j,m){
      vi a;
      FOR(i,n){
        a.PB(arr[i][j]);
      }
      sortall(a);
      ll sum=a[0];
      for(ll i=1;i<n;i++){
        ans+=(i)*(a[i])-sum;
        sum+=a[i];
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}