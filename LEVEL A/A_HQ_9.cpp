#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int count=0;
  string s;
  getline(cin,s);
  for(int i=0;i<s.size();i++){
    if(s[i]=='H'  || s[i]=='Q' || s[i]=='9'){
      count++;
      break;
    }
  }
  if(count!=0){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
  return 0;
}