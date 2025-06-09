#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(a, c) for (long long(a) = 0; (a) < (c); (a)++)
typedef long long int ll;
typedef vector<long long> vi;
typedef pair<long long, long long> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
int main(){
  fastIO;
  long long t;
  cin>>t;
  while(t--){
    long long n,m;
    cin>>n>>m;
    vi arr(n);
    vi brr(m);
    FOR(i,n){
      cin>>arr[i];
    }
    FOR(i,m){
      cin>>brr[i];
    }
    sort(arr.begin(),arr.end());
    sort(brr.rbegin(),brr.rend());
    long long ans=0;
    for(long long i=0;i<n;i++){
      ans+=abs(arr[i]-brr[i]);
    }
    long long i=n;
    long long j=m;
    if(m>n){
      while(n--){
        long long d=abs(arr[i-1]-brr[j-1]);
        long long e=abs(arr[i-1]-brr[i-1]);
        ans=max(ans,ans+d-e);
        i--;
        j--;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}