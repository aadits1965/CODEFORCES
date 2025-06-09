#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  cout.tie(nullptr); 
  int t,s,count=0;
  cin>>t>>s;
  int a=t;
  while(t>=s){
    count+=t/s;
    t=(t%s+t/s);
  }
  if(a<s){
    cout<<a<<endl;
  }
  else{
    cout<<a+count<<endl;
  }
  return 0;
}