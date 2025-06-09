#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n,m,sum=0;
  cin>>n>>m;
  vector<int>arr(m);
  for(int i=0;i<m;i++){
    cin>>arr[i];
  }
  int d=1;
  for(int i=0;i<m;i++){
    if(arr[i]>=d){
      sum+=arr[i]-d;
      d=arr[i];
    }
    else{
      sum+=n-d+arr[i];
      d=arr[i];
    }
  }
  cout<<sum<<endl;
  return 0;
}