#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    int count=0;
    string s;
    cin>>s;
    if(s.length()==1){
      cout<<"NO"<<endl;
    }
    else if(s=="()"){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
      for(int i=0;i<s.length()-1;i++){
        if(s[i+1]==s[i]){
          count++;
          break;
        }
      }
      if(count>0){
        for(int i=0;i<s.length();i++){
          cout<<"()";
        }
        cout<<endl;
      }
      else{
        for(int i=0;i<s.length();i++){
          cout<<"(";
        }
        for(int i=0;i<s.length();i++){
          cout<<")";
        }
        cout<<endl;
      }
    }
  }
  return 0;
}
