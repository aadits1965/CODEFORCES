#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n,count=0,flag=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]<0){
        count++;
      }
      if(arr[i]==0){
        flag++;
      }
    }
    if(flag!=0){
      cout<<"0"<<endl;
    }
    else{
      if(count%2==0){
        cout<<"1"<<endl;
        cout<<"1"<<" "<<"0"<<endl;
      }
      else{
        cout<<"0"<<endl;
      }
    }
  }
  return 0;
}