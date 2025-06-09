#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  if(n%2!=0){
    if(k<=(n/2+1)){
      cout<<3*n+k-1<<endl;
    }
    else{
      cout<<4*n-k<<endl;
    }
  }
  else{
    if(k<=(n/2)){
      cout<<3*n+k-1<<endl;
    }
    else{
      cout<<4*n-k<<endl;
    }
  }
  return 0;
}