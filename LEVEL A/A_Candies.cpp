#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  cout.tie(nullptr); 
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int i=2;
    bool flag=true;
    while(flag){
      if(n%int(pow(2,i)-1)==0){
        cout<<n/int(pow(2,i)-1)<<endl;
        flag=false;
      }
      else{
        i++;
      }
    }
  }
  return 0;
}
