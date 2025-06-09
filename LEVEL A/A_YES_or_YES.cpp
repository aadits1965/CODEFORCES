#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
    string s;
    getline(cin,s);
    for(char& i : s){
      i=toupper(i);
    }
    if(s=="YES"){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}