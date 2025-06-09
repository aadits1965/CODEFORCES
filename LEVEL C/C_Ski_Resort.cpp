#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,k,q,count=0,sum=0;
    cin>>n>>k>>q;
    vector<long long>arr(n);
    vector<long long>days;
    for(long long i=0;i<n;i++){
      cin>>arr[i];
    }
    for(long long i=0;i<n;i++){
      if(arr[i]<=q){
        count++;
        if(i==n-1){
          days.push_back(count);
        }
      }
      else{
        if(count>0){
          days.push_back(count);
          count=0;
        }
      }
    }
    if(days.size()==0){
      cout<<"0"<<endl;
    }
    else{
      for(long long i=0;i<days.size();i++){
        if(days[i]<k){
          continue;
        }
        else{
          sum+=((days[i]-k+1)*(days[i]-k+2)/2);
        }
      }
      cout<<sum<<endl;
    }
  }
  return 0;
}