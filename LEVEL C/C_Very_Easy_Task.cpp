#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,a,b;
  cin>>n>>a>>b;
  if(n==1){
    cout<<min(a,b)<<endl;
  }
  else if(n==2 && a==b){
    cout<<a<<endl;
  }
  else{
    int l=0;
    int r=max(a,b)*n;
    while(r>l+1){
      int m=(r+l)/2;
      if(m<min(a,b)){
        l=m;
      }
      m-=min(a,b);
      if(m/a+m/b+1<n){
        l=m+min(a,b);
      }
      else{
        r=m+min(a,b);
      }
    }
    cout<<r<<endl;
  }
  return 0;
}