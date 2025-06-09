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
    ll n;
    cin>>n;
    if(n==1){
      cout<<2<<endl;
      continue;
    }
    if(n<=3){
      cout<<3<<endl;
      continue;
    }
    ll low=0;
    ll high=min(n,2000000000LL);
    ll ans=0;
    bool flag=true;
    while(low<=high){
      ll mid=(low+high)/2;
      ll quant=mid*(mid-1)/2;
      if(quant<n){
        ans=mid;
        low=mid+1;
      }
      else if(quant==n){
        ans=mid;
        low=mid+1;
        flag=false;
        break;
      }
      else{
        high=mid-1;
      }
    }
    if(!flag){
      cout<<ans<<endl;
    }
    else{
      ll left=n-(ans*(ans-1)/2);
      ans+=left;
      cout<<ans<<endl;
    }
  }
  return 0;
}