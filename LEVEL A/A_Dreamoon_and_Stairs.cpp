#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,m;
  cin>>n>>m;
  if(n==0){
    cout<<n<<endl;
  }
  else{
    if(m>n){
      cout<<"-1"<<endl;
    }
    else{
      int a=0;
      if(ceil(1.0*n/2)<2){
        a=2;
      }
      else{
        a=ceil(1.0*n/2);
      }
      for(int i=a;i<=n;i++){
        if(i%m==0){
          cout<<i<<endl;
          break;
        }
      }
    }
  }
  return 0;
}