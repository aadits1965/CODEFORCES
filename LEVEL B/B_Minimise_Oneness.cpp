#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n==1){
      cout<<"0"<<endl;
    }
    else if(n==2){
      cout<<"01"<<endl;
    }
    else{
      cout<<"01";
      for(int i=0;i<n-2;i++){
        cout<<"0";
      }
      cout<<endl;
    }
  }
  return 0;
}