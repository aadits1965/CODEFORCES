#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    while(t--){
      int x;
      cin>>x;
      int l=0;
      int r=n-1;
      bool flag=true;
      while(r>=l){
        int m=(l+r)/2;
        if(arr[m]<x){
          l=m+1;
        }
        else if(arr[m]>x){
          r=m-1;
        }
        else{
          cout<<"YES"<<endl;
          flag=false;
          break;
        }
      } 
      if(flag){
        cout<<"NO"<<endl;
      }
    }
    return 0;
}