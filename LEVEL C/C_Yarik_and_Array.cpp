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
    vi nums(n);
    FOR(i,n){
      cin>>nums[i];
    }
    long long ans=LONG_LONG_MIN;
    long long sum=0;
    for(int i=0;i<n-1;i++){
      sum+=nums[i];
      if(sum>ans){
        ans=sum;
      }
      if(sum<0){
        sum=0;
      }
      if((nums[i]+nums[i+1])%2==0){
        sum=0;
      }
    }
    sum=nums[n-1];
    long long ans2=nums[n-1];
    for(int i=n-1;i>0;i--){
      if((nums[i]+nums[i-1])%2!=0){
        sum+=nums[i-1];
        ans2=max(ans2,sum);
      }
      else{
        break;
      }
    }
    cout<<max(ans,(sum,ans2))<<endl;
  }
  return 0;
}