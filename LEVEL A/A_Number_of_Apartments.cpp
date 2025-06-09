#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  cout.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    double n;
    int count=0;
    cin>>n;
    double x,y,z;
    for(int i=0;i<=n/3;i++){
      for(int j=0;j<=n/7;j++){
        y=(n-3*i-7*j)/5;
        if(floor(y)==y){
          cout<<i<<" "<<y<<" "<<j<<endl;
          count++;
        }
        if(count>0){
          break;
        }
      }
      if(count>0){
        break;
      }
    }
    if(count==0){
      cout<<"-1"<<endl;
    }
  }
  return 0;
}