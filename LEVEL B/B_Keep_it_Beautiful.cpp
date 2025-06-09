#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n,d=0,count=0,e=0,f=0;
    cin>>n;
    bool flag=false;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n;i++){
      if(arr[i]>=d){
        cout<<"1";
        d=arr[i];
      }
      else{
        if(arr[i]>arr[0]){
          cout<<"0";
        }
        else{
          cout<<"1";
          e=arr[i];
          f=i;
          flag=true;
          break;
        }
      }
    }
    if(!flag){
      cout<<endl;
    }
    if(flag){
      for(int i=f+1;i<n;i++){
        if(arr[i]<=arr[0] && arr[i]>=e){
          cout<<"1";
          e=arr[i];
        }
        else{
          cout<<"0";
        }
      }
      cout<<endl;
    }
  }
  return 0;
}