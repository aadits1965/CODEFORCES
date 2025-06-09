#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n,t,sum=0;
  cin >> n>>t;
  bool flag=false;
  vector<int>arr(n-1);
  for(int i=0;i<n-1;i++){
    cin>>arr[i];
  }
  int i=0;
  while(sum<t){
    sum=arr[i]+i+1;
    i=sum-1;
    if(sum==t){
      flag=true;
      break;
    }
  }
  if(flag){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
  return 0;
}