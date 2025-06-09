#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
    int n;
    cin>>n;
    if(n<=6 || n==9){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
      if(n%3==0){
        cout<<"1 4 "<<n-5<<endl;
      }
      else{
        cout<<"1 2 "<<n-3<<endl;
      }

    }
  }
  return 0;
}