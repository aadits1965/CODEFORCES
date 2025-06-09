#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    string s;
    cin >> s;
    int n=s.length(),count=0,count1=0,count2=0;
    bool flag=true;
    if(n%2!=0){
      cout<<"NO"<<endl;
    }
    else{
      if(s[0]==')' || s[n-1]=='('){
        cout<<"NO"<<endl;
      }
      else{
        for(int i=0;i<n;i++){
          if(s[i]=='('){
            count++;
          }
          else if(s[i]==')'){
            count1++;
          }
          else{
            count2++;
          }
        }
        if(count>n/2 || count1>n/2){
          cout<<"NO"<<endl;
        }
        else{
          cout<<"YES"<<endl;
        }
      }
    }
  }
  return 0;
}