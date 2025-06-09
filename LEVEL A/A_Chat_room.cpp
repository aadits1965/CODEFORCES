#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  cout.tie(nullptr);
  string s;
  cin>>s;
  int t=0,count=0;
  string u="hello";
  char a='h';
  for (int i=0;i<s.length();i++){
    if(s[i]==a){
      count++;
      t=i;
      a=u[count];
    }
  }
  
  if(count==5){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
  return 0;
}