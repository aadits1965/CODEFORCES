#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
    int n,k,x;
    cin>>n>>k>>x;
    if(k-x>1){
      cout<<"-1"<<endl;
    }
    else if(k-x==1){
      if(n<x+1){
        cout<<"-1"<<endl;
      }
      else if(n==x+1){
        cout<<x*(x+1)/2<<endl;
      }
      else{
        cout<<x*(x+1)/2+x*(n-x-1)<<endl;
      }
    }
    else if(k==x){
      if(n<x){
        cout<<"-1"<<endl;
      }
      else if(n==x){
        cout<<x*(x-1)/2<<endl;
      }
      else{
        cout<<x*(x-1)/2+(x-1)*(n-x)<<endl;
      }
    }
    else{
      if(n<k){
        cout<<"-1"<<endl;
      }
      else if(n==k){
        cout<<k*(k-1)/2<<endl;
      }
      else{
        cout<<k*(k-1)/2+x*(n-k)<<endl;
      }
    }
  }
  return 0;
}