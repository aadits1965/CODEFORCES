#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    long long n,k,x,count=0,sum=0;
    cin>>n>>k>>x;
    vector<long long>arr(x);
    for(long long i=0;i<x;i++){
      cin>>arr[i];
      if(arr[i]+1>=n){
        count++;
      }
      else{
        sum+=arr[i];
      }
    }
    cout<<k+sum+count*(n-1)<<endl;
  }
  return 0;
}