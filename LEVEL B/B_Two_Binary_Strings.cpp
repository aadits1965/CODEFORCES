#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  while(n--){
    string s,t;
    cin>>s>>t;
    int count=0;
    for(int i=0;i<s.length()-1;i++){
      if(s[i]==t[i] && s[i]=='0' && s[i+1]==t[i+1] && s[i+1]=='1'){
        count++;
        break;
      }
    }
    if(count==1){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }   
  }
  return 0;
}