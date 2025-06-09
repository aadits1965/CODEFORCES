#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    string s;
    cin>>s;
    if(s[0]!='?'){
      cout<<s[0];
      for(int i=1;i<s.length();i++){
        if(s[i]!='?'){
          cout<<s[i];
        }
        else{
          if(s[i-1]=='1'){
            cout<<"1";
            s[i]='1';
          }
          else{
            cout<<"0";
            s[i]='0';
          }
        }
      }
    }
    else{
      cout<<"0";
      for(int i=1;i<s.length();i++){
        if(s[i]!='?'){
          cout<<s[i];
        }
        else{
          if(s[i-1]=='1'){
            cout<<"1";
            s[i]='1';
          }
          else{
            cout<<"0";
            s[i]='0';
          }
        }
      }
    }
    cout<<endl;
  }
  return 0;
}