#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  cout.tie(nullptr); 
  int t;
  cin>>t;
  while(t--){
    int count1=0,count0=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
      if(s[i]=='1'){
        count1++;
      }
      else{
        count0++;
      }
    }
    int d=min(count0,count1);
    if(d%2==0){
      cout<<"NET"<<endl;
    }
    else{
      cout<<"DA"<<endl;
    }
  }
  return 0;
}