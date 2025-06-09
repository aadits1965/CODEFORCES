#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  getline(cin,s);
  int count=0,flag=0,r=0,t=0;
  if(s.length()<=6){
    cout<<"NO"<<endl;
  }
  else{
    for(int i=0;i<s.length();i++){
      if(s[i]=='0'){
        count++;
        if(count==7){
          r++;
          break;
        }
      }
      else{
        count=0;
      }
    }
    for(int i=0;i<s.length();i++){
      if(s[i]=='1'){
        flag++;
        if(flag==7){
          t++;
          break;
        }
      }
      else{
        flag=0;
      }
    }
    if(r==1 || t==1){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}