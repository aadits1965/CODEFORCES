#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  cout.tie(nullptr);
  int t;
  cin>>t;
  bool flag=true;
  int arr[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
  for(int i=0;i<14;i++){
    if(t%arr[i]==0){
      cout<<"YES"<<endl;
      flag=false;
      break;
    }
  }
  if(flag){
    cout<<"NO"<<endl;
  }
  return 0;
}