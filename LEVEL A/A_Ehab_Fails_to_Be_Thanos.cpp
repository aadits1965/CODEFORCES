#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,count=0;
  cin>>n;
  int arr[2*n];
  for(int i=0;i<2*n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<2*n;i++){
    if(arr[i+1]==arr[i]){
      count++;
    }
  }
  sort(arr,arr+2*n);
  if(count==2*n-1){
    cout<<"-1"<<endl;
  }
  else{
    for(int i=0;i<2*n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}