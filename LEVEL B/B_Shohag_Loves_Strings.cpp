#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  cout.tie(nullptr); 
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    bool flag=true;
    int count=0;
    if(s.length()==1){
      cout<<"-1"<<endl;
      count++;
    }
    else{
      for (int i = 0; i < s.size() - 1; ++i) {
        if (s[i] == s[i + 1]) {
          cout<<s[i]<<s[i]<<endl;
          flag=false;
          count++;
          break;
        }
      }
      if(flag){
        for (int i = 0; i < s.size() - 2; ++i) {
          if (s[i] != s[i + 1] && s[i] != s[i + 2] && s[i+2] != s[i + 1]) {
            cout<<s[i]<<s[i+1]<<s[i+2]<<endl;
            count++;
            break;
          }
        }
      }
    }
    if(count==0){
      cout<<"-1"<<endl;
    }
  }
  return 0;
}