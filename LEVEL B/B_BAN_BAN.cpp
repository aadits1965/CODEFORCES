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
    if(n%2==0){
      cout<<n/2<<endl;
      for(int i=1;i<=n/2;i++){
        cout<<3*i-2<<" "<<3*(n-i+1)<<endl;
      }
    }
    else{
      cout<<(n+1)/2<<endl;
      for(int i=1;i<=(n+1)/2;i++){
        cout<<3*i-2<<" "<<3*(n-i+1)<<endl;
      }
    }
  }
  return 0;
}