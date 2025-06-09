#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  cout.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    long long sum=0,ones=0,u=0,count=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
      if(s[i]=='1'){
        u=i;
        break;
      }
      if(s[i]=='0'){
        count++;
      }
    }
    if(count!=s.length()){
      for(int i=u;i<s.length();i++){
        if(s[i]=='1'){
          ones++;
        }
        if(s[i]=='0'){
          sum+=ones+1;
        }
      }
      cout<<sum<<endl;
    }
    else{
      cout<<"0"<<endl;
    }
  }
  return 0;
}