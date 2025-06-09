#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    if(n<=k){
      cout<<k-n<<endl;
    }  
    else{
      if(n%2==0){
        if(k%2==0){
          cout<<"0"<<endl;
        }
        else{
          cout<<"1"<<endl;
        }
      }
      else{
        if(k%2==0){
          cout<<"1"<<endl;
        }
        else{
          cout<<"0"<<endl;
        }
      }
    }
  }
  return 0;
}