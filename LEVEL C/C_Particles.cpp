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
    cin>>n;
    vi arr(n);
    ll sum1=0;
    ll sum2=0;
    int count=0;
    FOR(i,n){
      cin>>arr[i];
      if(i%2==0){
        sum1+=(max(arr[i],0LL));
      }
      else{
        sum2+=(max(arr[i],0LL));
      }
      if(arr[i]<0){
        count++;
      }
    }
    if(count==n){
      sortall(arr);
      cout<<arr[n-1]<<endl;
      continue;
    }
    cout<<max(sum1,sum2)<<endl;
  }
  return 0;
}