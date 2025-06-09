#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  int l =1;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int minimum=arr[0];
  for(int i=0;i<n-1;i++){
    if(arr[i+1]<minimum){
      minimum=arr[i+1];
      l=i+2;
    }
  }
  if(n==1){
    cout<<"-1"<<endl;
  }
  else if(n==2 && arr[0]==arr[1]){
     cout<<"-1"<<endl;
  }
  else{
     cout<<"1"<<endl;
     cout<<l<<endl;
  }
  return 0;
}
