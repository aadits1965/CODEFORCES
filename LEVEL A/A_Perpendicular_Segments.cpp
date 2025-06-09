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
    if(x<=n && x<=k){
      cout<<"0 0 "<<x<<" 0"<<endl;
      cout<<"0 0 0 "<<x<<endl;
    }
    else if(x<=n && x>k){
      cout<<"0 0 "<<k<<" "<<k<<endl;
      cout<<"0 "<<k<<" "<<k<<" 0"<<endl;
    }
    else if(x>n && x<=k){
      cout<<"0 "<<n<<" "<<n<<" 0"<<endl;
      cout<<"0 0 "<<n<<" "<<n<<endl;
    }
    else{
      if(k<=n){
        cout<<"0 0 "<<k<<" "<<k<<endl;
        cout<<"0 "<<k<<" "<<k<<" 0"<<endl;
      }
      else{
        cout<<"0 "<<n<<" "<<n<<" 0"<<endl;
        cout<<"0 0 "<<n<<" "<<n<<endl;
      }
    }
  }
  return 0;
}