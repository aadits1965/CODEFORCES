#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while(t--) {
    int n,m;
    cin>>n>>m;
    if(n%2!=0 && m!=1){
      cout<<"NO"<<endl;
    }
    else if(n%2!=0 && m==1){
      cout<<"YES"<<endl;
      for(int i=1;i<=n;i++){
        cout<<i<<endl;
      }
    }
    else{
      cout<<"YES"<<endl;
      int k=1;
      for(int i=1;i<=n/2;i++){
        for(int j=1;j<=m;j++){
          cout<<k<<" ";
          k+=2;
        }
        cout<<endl;
      }
      int l=2;
      for(int i=1;i<=n/2;i++){
        for(int j=1;j<=m;j++){
          cout<<l<<" ";
          l+=2;
        }
        cout<<endl;
      }
    }
  }
  return 0;
}