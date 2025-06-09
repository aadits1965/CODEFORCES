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
    int n;
    cin>>n;
    vi arr(n);
    FOR(i,n){
      cin>>arr[i];
    }
    sortall(arr);
    vi result;
    FOR(i,n-1){
      if(arr[i]==arr[i+1]){
        result.PB(1);
      }
      else{
        result.PB(0);
      }
    }
    long long ans=0;
    if(n%2==0){
      ans+=(n/2)*(n/2+1);
      for(int i=0;i<n/2;i++){
        result[i]*=(i+1);
      }
      for(int i=n-1;i>n/2-1;i--){
        result[i]*=(n-i-1);
      }
      for(int i=0;i<n-1;i++){
        ans+=result[i];
      }
    }
    else{
      ans+=((n+1)/2)*((n+1)/2+1)-(n+1)/2;
      for(int i=0;i<n/2;i++){
        result[i]*=(i+1);
      }
      for(int i=n-1;i>n/2-1;i--){
        result[i]*=(n-i-1);
      }
      for(int i=0;i<n-1;i++){
        ans+=result[i];
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}