#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int count=0;
  for(int i=0;i<s.length();i++){
    if(s[i]<92){
      count++;
    }
  }
  if(count==s.length() || (count==s.length()-1 && s[0]>92)){
    for(int i=0;i<s.length();i++){
      if(s[i]<92){
        s[i]=s[i]+32;
      }
      else{
        s[i]=s[i]-32;
      }
    }
    cout<<s<<endl;
  }
  else{
    cout<<s<<endl;
  }
}