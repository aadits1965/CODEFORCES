#include<bits/stdc++.h>
using namespace std;
int main(){
  int r,s,t;
  cin>>r>>s>>t;
  if(r!=1 && s!=1 && t!=1){
    cout<<r*s*t<<endl;
  }
  else if(r==1 && s!=1 && t!=1){
    cout<<(r+s)*t<<endl;
  }
  else if(r!=1 && s==1 && t!=1){
    cout<<max((r+s)*t,r*(s+t))<<endl;
  }
  else if(r!=1 && s!=1 && t==1){
    cout<<r*(s+t)<<endl;
  }
  else if(r!=1 && s==1 && t==1){
    cout<<r*(s+t)<<endl;
  }
  else if(r==1 && s!=1 && t==1){
    cout<<r+s+t<<endl;
  }
  else if(r==1 && s==1 && t!=1){
    cout<<(r+s)*t<<endl;
  }
  else{
    cout<<r+s+t<<endl;
  }
  return 0;
}