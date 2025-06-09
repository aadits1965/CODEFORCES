#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  long long t;
  cin>>t;
  while(t--){
    long long n,m,k;
    cin>>n>>m>>k;
    if(m==1){
      cout<<"NO"<<endl;
    }
    else if(k==n){
      cout<<"NO"<<endl;
    }
    else if(k<=n-ceil(1.0*n/m+1)){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}
