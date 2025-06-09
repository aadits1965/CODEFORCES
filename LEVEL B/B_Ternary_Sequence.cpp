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
    int a0,a1,a2,b0,b1,b2;
    cin>>a0>>a1>>a2>>b0>>b1>>b2;
    ll ans=0;
    if(a2>=b1){
      ans+=2*b1;
      a2-=b1;
      b1=0;
      if(a1>b0){
        ans-=2*(a1-b0);
      }
    }
    else{
      ans+=2*a2;
      b1=b1-a2;
      a2=0;
      if(a1>(b0+b1)){
        ans-=2*(a1-b0-b1);
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}