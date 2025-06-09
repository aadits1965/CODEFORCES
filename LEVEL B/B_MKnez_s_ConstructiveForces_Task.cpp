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
    if(n==3){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
      if(n%2==0){
        for(int i=0;i<n/2;i++){
          cout<<"1"<<" "<<"-1"<<" ";
        }
        cout<<endl;
      }
      else{
        for(int i=0;i<=n/2-1;i++){
          cout<<-(n/2-1)<<" "<<n/2<<" ";
        }
        cout<<-(n/2-1)<<endl;
        cout<<endl;
      }
    }
  }
  return 0;
}