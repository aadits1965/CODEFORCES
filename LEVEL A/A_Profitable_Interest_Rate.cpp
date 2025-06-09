#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    int a,b;
    cin>>a>>b;
    if(a>=b){
      cout<<a<<endl;
    }
    else if(b>=2*a){
      cout<<"0"<<endl;
    }
    else{
      cout<<2*a-b<<endl;
    }

  }
  return 0;
}