#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    int n,count=0,flag=0;
    cin>>n;
    cin.ignore();
    string s;
    getline(cin,s);
    for(int i=0;i<n;i++){
      if(s[i]=='1'){
        count++;
      }
    }
    if(count==2){
      for(int i=0;i<n;i++){
        if(s[i]=='1' && s[i+1]=='1'){
          flag++;
          break;
        }
      }
      if(flag>0){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }
    }
    else{
      if(count%2==0){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
  }
  return 0;
}