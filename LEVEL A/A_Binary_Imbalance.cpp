#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    int n,count0=0,count1=0;
    cin>>n;
    cin.ignore();
    string s;
    getline(cin,s);
    for(char ch : s){
      if(ch=='1'){
        count1++;
      }
      else if(ch=='0'){
        count0++;
      }
    }
    if(count0==0){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }
  }
  return 0;
}