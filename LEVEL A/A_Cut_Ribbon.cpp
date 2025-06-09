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
  ll n,a,b,c;
  cin>>n>>a>>b>>c;
  ll ans=0;
  for(ll j=0;j<=n/b;j++){
    for(ll k=0;k<=n/c;k++){
      ll d=b*j+c*k;
      if(d>n){
        continue;
      }
      else if(d==n){
        ans=max(ans,j+k);
      }
      else{
        if((n-d)%a==0){
          ans=max(ans,j+k+(n-d)/a);
        }
        else{
          continue;
        }
      }
    }
  }
  cout<<ans<<endl;
  return 0;
}