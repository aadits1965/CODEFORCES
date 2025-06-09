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
      int l=-1;
      int r=n;
      bool flag=true;
      while(r>l+1){
        int m=(l+r)/2;
        if(arr[m]<x){
          l=m;
        }
        else{
          r=m;
        }
      }
      cout<<r+1<<endl;
    }
    return 0;
}