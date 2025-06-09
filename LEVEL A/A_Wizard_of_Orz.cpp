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
    string s="0123456789";
    if(n==1){
      cout<<"9"<<endl;
    }
    else if(n==2){
      cout<<"98"<<endl;
    }
    else if(n==3){
      cout<<"989"<<endl;
    }
    else{
      cout<<"989";
      for(int i=1;i<=(n-3)/10;i++){
        cout<<s;
      }
      cout<<s.substr(0,(n-3)%10)<<endl;

    }
  }
  return 0;
}