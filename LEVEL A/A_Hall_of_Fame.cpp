#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool flag=false;
    for(int i=0;i<n-1;i++){
      if(s[i]=='R' && s[i+1]=='L'){
        flag=true;
        break;
      }
    }
    if(flag){
      cout<<"0"<<endl;
      continue;
    }
    for(int i=0;i<n-1;i++){
      if(s[i]=='L' && s[i+1]=='R'){
        cout<<i+1<<endl;
        flag=true;
        break;
      }
    }
    if(!flag){
      cout<<"-1"<<endl;
    }
  }
  return 0;
}