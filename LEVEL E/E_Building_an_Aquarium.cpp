#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin >> t;
  while(t--) {
    long long n,x,ans=0;
    cin>>n>>x;
    long long sum=0,sum2=0;
    vector<long long>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
      sum+=arr[i];
    }
    sort(arr.begin(),arr.end());
    ans=arr[0];
    bool flag=false;
    if(arr[n-1]*n-sum<x){
      cout<<(x-arr[n-1]*n+sum)/n+arr[n-1]<<endl;
    }
    else{
      for(int i=0;i<n-1;i++){
        if(arr[i+1]>arr[i]){
          sum2+=((arr[i+1]-arr[i])*(i+1));
          if(sum2<x){
            ans=arr[i+1];
          }
          else if(sum2==x){
            cout<<arr[i+1]<<endl;
            flag=false;
            break;
          }
          else{
            sum2-=((arr[i+1]-arr[i])*(i+1));
            int d=x-sum2;
            cout<<d/(i+1)+arr[i]<<endl;
            flag=false;
            break;
          }
        }
        else{
          flag=true;
        }
      }
      if(flag){
        cout<<x/n+arr[0]<<endl;
      }
    }
  }
  return 0;
}