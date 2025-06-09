#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
typedef long long int ll;
typedef vector<int> vi;
typedef pair<ll, ll> pi;
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
    long long n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<pair<long long, long long>>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i].F;
      cin>>arr[i].S;
    }
    if(k==0){
      cout<<abs(arr[a-1].F-arr[b-1].F)+abs(arr[a-1].S-arr[b-1].S)<<endl;
      continue;
    }
    if(a<=k && b<=k){
      cout<<"0"<<endl;
    }
    else if(a<=k){
      long long val=LLONG_MAX;
      for(int i=0;i<k;i++){
        val=min(val,ll(abs(arr[i].F-arr[b-1].F)+abs(arr[i].S-arr[b-1].S)));
      }
      cout<<val<<endl;
    }
    else if(b<=k){
      long long val=LLONG_MAX;
      for(int i=0;i<k;i++){
        val=min(val,ll(abs(arr[i].F-arr[a-1].F)+abs(arr[i].S-arr[a-1].S)));
      }
      cout<<val<<endl;
    }
    else{
      long long val1=LLONG_MAX;
      for(int i=0;i<k;i++){
        val1=min(val1,ll(abs(arr[i].F-arr[a-1].F)+abs(arr[i].S-arr[a-1].S)));
      }
      long long val2=LLONG_MAX;
      for(int i=0;i<k;i++){
        val2=min(val2,ll(abs(arr[i].F-arr[b-1].F)+abs(arr[i].S-arr[b-1].S)));
      }
      cout<<min(abs(arr[a-1].F-arr[b-1].F)+abs(arr[a-1].S-arr[b-1].S),val1+val2)<<endl;
    }
  }
  return 0;
}