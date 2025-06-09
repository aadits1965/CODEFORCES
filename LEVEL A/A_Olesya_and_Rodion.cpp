#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,m;
  cin>>n>>m;
  if(m!=10){
    for(int i=1;i<=n;i++){
      cout<<m;
    }
    cout<<endl;
  }
  else{
    if(n==1){
      cout<<"-1"<<endl;
    }
    else{
      for(int i=1;i<=n-1;i++){
        cout<<"1";
      }
      cout<<"0"<<endl;
    }
  }
  return 0;
}