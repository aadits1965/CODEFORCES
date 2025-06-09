#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,m;
    cin>>n>>m;
    for(int i=1;i<n;i++){
      for(int j=1;j<=m;j++){
        cout<<"B";
      } 
      cout<<endl;
    }
    for(int j=1;j<m;j++){
      cout<<"B";
    }
    cout<<"W"<<endl;
  }
  return 0;
}