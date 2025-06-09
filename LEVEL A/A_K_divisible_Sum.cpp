#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n,m;
    cin>>n>>m;
    if(n<=m){
      cout<<(m+n-1)/n<<endl;
    }
    else{ 
      if(n%m!=0){
        cout<<ceil(1.0*(2*n-n%m)/n)<<endl;
      }
      else{
        cout<<"1"<<endl;
      }
    }
  }
  return 0;
}