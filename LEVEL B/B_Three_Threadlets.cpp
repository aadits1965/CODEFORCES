#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    int n,k,x;
    cin>>n>>k>>x;
    if(min(min(n,k),x)==n){
      if(k%n==0 && x%n==0){
        if(k/n + x/n <= 5){
          cout<<"YES"<<endl;
        }
        else{
          cout<<"NO"<<endl;
        }
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    else if(min(min(n,k),x)==k){
      if(n%k==0 && x%k==0){
        if(n/k + x/k <= 5){
          cout<<"YES"<<endl;
        }
        else{
          cout<<"NO"<<endl;
        }
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    else{
      if(n%x==0 && k%x==0){
        if(n/x + k/x <= 5){
          cout<<"YES"<<endl;
        }
        else{
          cout<<"NO"<<endl;
        }
      }
      else{
        cout<<"NO"<<endl;
      }
    }
  }
  return 0;
}