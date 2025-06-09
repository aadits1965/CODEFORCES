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
    int n,k;
    cin>>n>>k;
    vi arr(n),brr(n);
    FOR(i,n){
      cin>>arr[i];
    } 
    FOR(i,n){
      cin>>brr[i];
    }
    vector<long long> presum(n);
    vector<int> maxarr(n);
    presum[0]=arr[0];
    for(int i=1;i<n;i++){
      presum[i]=presum[i-1]+arr[i];
    }  
    int maximum=0;
    FOR(i,n){
      if(brr[i]>maximum){
        maximum=brr[i];
      }
      maxarr[i]=maximum;
    }
    long long ans=0;
    FOR(i,min(n,k)){
      ans=max(ans,presum[i]+(k-i-1)*maxarr[i]);
    }
    cout<<ans<<endl;
  }
  return 0;
}