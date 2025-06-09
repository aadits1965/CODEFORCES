#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t,s;
  cin>>t>>s;
  if(min(t,s)%2==0){
    cout<<"Malvika"<<endl;
  }
  else{
    cout<<"Akshat"<<endl;
  }
  return 0;
}