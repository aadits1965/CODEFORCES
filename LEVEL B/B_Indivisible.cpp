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
    if(n==1){
      cout<<n<<endl;
    }
    else if(n%2!=0){
      cout<<"-1"<<endl;
    }
    else{
      for(int i=1;i<=n/2;i++){
        cout<<2*i<<" "<<2*i-1<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}