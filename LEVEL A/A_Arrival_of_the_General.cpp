#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int n,j=0,k=0;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int maximum=arr[0];
  int minimum=arr[0];
  for(int i=0;i<n-1;i++){
    if(arr[i+1]>maximum){
      maximum=arr[i+1];
      j=i+1;
    }
  }
  for(int i=0;i<n-1;i++){
    if(arr[i+1]<=minimum){
      minimum=arr[i+1];
      k=i+1;
    }
  }
  if(j<k){
    cout<<n-k-1+j<<endl;
  }
  else if(j==k){
    cout<<"0"<<endl;
  }
  else{
    cout<<n-k+j-2<<endl;
  }
  return 0;
}