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

long long maxSubArraySum(vector<int>& nums, string s) {
  int n=nums.size();
  long long ans=-1e18;
  long long sum=0;
  FOR(i,n){
    if(s[i]=='1'){
      sum+=nums[i];
      if(sum>ans){
        ans=sum;
      }
      if(sum<0){
        sum=0;
      }
    }
    else{
      sum=0;
    }
  }
  return ans;
}

int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    long long n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vi arr(n);
    FOR(i,n){
      cin>>arr[i];
    }
    long long maxsum=maxSubArraySum(arr,s);
    if(maxsum>k){
      cout<<"NO"<<endl;
      continue;
    }
    int j=-1;
    FOR(i,n){
      if(s[i]=='0'){
        j=i;
        break;
      }
    }
    if(j==-1){
      if(maxsum==k){
        cout<<"YES"<<endl;
        FOR(i,n){
          cout<<arr[i]<<" ";
        }
        cout<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
      continue;
    }
    cout<<"YES"<<endl;
    long long ans1=-1e18;
    long long sum1=0;
    for(int i=j-1;i>=0;i--){
      sum1+=arr[i];
      if(sum1>ans1){
        ans1=sum1;
      }
    }
    long long ans2=-1e18;
    long long sum2=0;
    for(int i=j+1;i<n && s[i]=='1';i++){
      sum2+=arr[i];
      if(sum2>ans2){
        ans2=sum2;
      }
    }
    long long a=k-max(0LL,ans1)-max(0LL,ans2);
    FOR(i,n){
      if(i!=j){
        if(s[i]=='1'){
          cout<<arr[i]<<" ";
        }
        else{
          cout<<-1000000000000000000<<" ";
        }
      }
      else{
        cout<<a<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}