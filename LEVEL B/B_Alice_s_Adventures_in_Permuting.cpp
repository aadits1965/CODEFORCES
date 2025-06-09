#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    long long n,a,b;
    cin>>n>>a>>b;
    if(n==1 && b!=0){
      cout<<"1"<<endl;
    }
    else if(n==1 && b==0){
      cout<<"0"<<endl;
    }
    else{
      if(a==0 && b==0){
        cout<<"-1"<<endl;
      }
      else if(a==0 && b!=0 ){
        if(b>=n+3){
          cout<<"-1"<<endl;
        }
        else{
          cout<<n-1<<endl;
        }
      }
      else if(a!=0 && b==0){
        if(a==1){
          cout<<"0"<<endl;
        }
        else{
          cout<<ceil(n*1.0/2)<<endl;
        }
      }
      else{
        if(a==b){
          long long d=(n-n%b)/b;
          cout<<n-d+1<<endl;
        }
        else{
          cout<<ceil(n*1.0/2)<<endl;
        }
      }
    }
  }
  return 0;
}