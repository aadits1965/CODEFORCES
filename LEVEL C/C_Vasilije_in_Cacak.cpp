#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    double n,k,x;
    cin>>n>>k>>x; 
    if(x>(k/2)*(2*n-k+1)){
      cout<<"NO"<<endl;
    }
    else if(x<k*(k+1)/2){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }
  }
  return 0;
}
