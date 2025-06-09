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

long long gcd(long long a, long long b) {
  return b == 0 ? a : gcd(b, a % b);
}

long long gcdOfArray(const vector<long long>& arr) {
  long long res = arr[0];
  for (size_t i = 1; i < arr.size(); ++i) {
    res = gcd(res, arr[i]);
    if (res == 1) break; 
  }
  return res;
}

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
    if(n==1){
      cout<<1<<endl;
      continue;
    }
    sortall(arr);
    vi a;
    FOR(i,n-1){
      a.PB(arr[i+1]-arr[i]);
    }
    ll x=gcdOfArray(a);
    ll diff=arr[n-1]-arr[0];
    ll ans=0;
    if(diff==x*(n-1)){
      ll b=arr[n-1]+x;
      FOR(i,n){
        ans+=((b-arr[i])/x);
      }
    }
    else{
      FOR(i,n){
        ans+=((arr[n-1]-arr[i])/x);
      }
      ll d=0;
      for(int i=n-2;i>=0;i--){
        if(arr[i+1]-arr[i]!=x){
          d=arr[i+1]-x;
          break;
        }
      }
      ans+=((arr[n-1]-d)/x);
    }
    cout<<ans<<endl;
  }
  return 0;
}