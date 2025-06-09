#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  cout.tie(nullptr); 
  int t;
  cin>>t;
  if(t<3){
    cout<<"-1"<<endl;
  }
  else{
    for(int i=1;i<=t;i++){
      cout<<t-i+1<<" ";
    }
    cout<<endl;
  }
  return 0;
}