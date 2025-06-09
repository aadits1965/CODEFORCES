#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,count=0,sum=0;
    cin>>n;
    bool flag=false;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]<0){
        count++;
      }
    }
    if(count%2==0){
      for(int i=0;i<n;i++){
        sum+=abs(arr[i]);
      }
      cout<<sum<<endl;
    }
    else{
      for(int i=0;i<n;i++){
        if(arr[i]<0){
          arr[i]=abs(arr[i]);
        }
        if(arr[i]==0){
          flag=true;
        }
      }
      if(flag){
        for(int i=0;i<n;i++){
          sum+=abs(arr[i]);
        }
        cout<<sum<<endl;
      }
      else{
        sort(arr.begin(),arr.end());
        for(int i=1;i<n;i++){
          sum+=abs(arr[i]);
        }
        cout<<sum-arr[0]<<endl;
      }
    }
  }
  return 0;
}