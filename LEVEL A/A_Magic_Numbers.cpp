#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string t;
  cin>>t;
  int count=1,count1=0;
  for(int i=0;i<t.size();i++){
    if(t[i]!='1' && t[i]!='4'){
      count1++;
      break;
    }
  }
  for(int i=0;i<t.size()-1;i++){
    if(t[i+1]==t[i] && t[i]=='4'){
      count++;
      if(count>2){
        break;
      }
    }
    else{
      count=1;
    }
  }
  if(count>2){
    cout<<"NO"<<endl;
  }
  else{
    if(count1>0){
      cout<<"NO"<<endl;
    }
    else{
      if(t[0]=='4'){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }
    }
  }
  return 0;
}