#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    long long n,k;
    cin>>n>>k;
    if(n==k){
      for(int i=0;i<n;i++){
        cout<<"1"<<" ";
      }
      cout<<endl;
    }
    else if(k==1 && k!=n){
      int a=1;
      for(int i=0;i<n;i++){
        cout<<a<<" ";
        a++;
      }
      cout<<endl;
    }
    else{
      cout<<"-1"<<endl;
    }
  }
  return 0;
}