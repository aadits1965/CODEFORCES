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
    if(n%2!=0){
      for(int i=1;i<n;i++){
        cout<<"1"<<" ";
      }
      cout<<"1"<<endl;
    }
    else{
      cout<<"1"<<" "<<"3"<<" ";
      for(int i=1;i<=n-2;i++){
        cout<<"2"<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}