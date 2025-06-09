#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  string s,t;
  int count=0;
  cin>>s>>t;
  string answer="";
  for(int i=0;i<s.size();i++){
    if(t[i]<s[i]){
      answer+=t[i];
    }
    else if(t[i]==s[i] && t[i]=='z'){
      answer+=s[i];
    }
    else if(t[i]==s[i]){
      answer+=s[i]+1;
    }
    else{
      count++;
    }
  }
  if(count>0){
    cout<<"-1"<<endl;
  }
  else{
    cout<<answer<<endl;
  }
  return 0;
}
