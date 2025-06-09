#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string& str) {
  string reversed_str = str;
  reverse(reversed_str.begin(), reversed_str.end());
  return str == reversed_str;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
    string s;
    cin>>s;
    set<char>characters(s.begin(),s.end());
    if(characters.size()==1){
      cout<<"-1"<<endl;
    }
    else{
      if(isPalindrome(s)){
        if(s.size()%2!=0){
          for(int i=s.size()/2;i<s.size();i++){
            if(s[s.size()/2]!=s[i+1]){
              char d=s[s.size()/2];
              s[s.size()/2]=s[i+1];
              s[i+1]=d;
              break;
            }
          }
          cout<<s<<endl;
        }
        else{
          for(int i=s.size()/2;i<s.size();i++){
            if(s[s.size()/2]!=s[i+1]){
              char d=s[s.size()/2];
              s[s.size()/2]=s[i+1];
              s[i+1]=d;
              break;
            }
          }
          cout<<s<<endl;
        }
      }
      else{
        cout<<s<<endl;
      }
    }
  }
  return 0;
}