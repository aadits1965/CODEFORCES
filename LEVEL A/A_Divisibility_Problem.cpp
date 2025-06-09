#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
    int a,b;
    cin>>a>>b;
    if(a>b){
      if(a%b!=0){
      cout<<b-a%b<<endl;
      }
      else{
        cout<<"0"<<endl;
      }
    }
    else if(a==b){
      cout<<"0"<<endl;
    }
    else{
      cout<<b-a<<endl;
    }
  }
  return 0;
}