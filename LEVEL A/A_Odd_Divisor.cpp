#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    float n;
    cin>>n;
    float m=log2f(n);
    if(m-int(m)==0){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }
  }
  return 0;
}