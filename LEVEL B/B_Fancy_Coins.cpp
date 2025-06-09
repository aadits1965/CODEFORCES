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
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    if(n<=a){
      cout<<"0"<<endl;
      continue;
    }
    ll c=m*b;
    if(c<n){
      if(c+a>=n){
        cout<<"0"<<endl;
        continue;
      }
      else{
        ll d=n-c-a;
        ll y = d / m;
        ll x = d - m * y;
        ll minSum = x + y;
        ll bestX = x;
        ll bestY = y;
        ll e=m-bestX;
        if(e<=a && e>0){
          cout<<min(minSum,bestY+1)<<endl;
          continue;
        }
        cout<<minSum<<endl;
        continue;
      }
    }
    if(c==n){
      cout<<"0"<<endl;
      continue;
    }
    if(c>n){
      if(n%m==0){
        cout<<"0"<<endl;
        continue;
      }
      if(n%m<=a){
        cout<<"0"<<endl;
        continue;
      }
      else{
        cout<<n%m-a<<endl;
        continue;
      }
    }
  }
  return 0;
}