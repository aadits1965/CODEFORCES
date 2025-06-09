#include<bits/stdc++.h>
using namespace std; 

int main(){
  int n;
  cin>>n;
  while(n--){
    string a,b;
    cin>>a>>b;
    if(a[0]==b[0]){
      cout<<"YES"<<endl;
      cout<<a[0]<<"*"<<endl;
    }
    else if(a[a.length()-1]==b[b.length()-1]){
      cout<<"YES"<<endl;
      cout<<"*"<<a[a.length()-1]<<endl;
    }
    else{
      bool flag=true;
      string d;
      unordered_set<string> substringsA;
      for (int i = 0; i < a.size() - 1; i++) {
        substringsA.insert(a.substr(i, 2));
      }
      for (int i = 0; i < b.size() - 1; i++) {
        string subB = b.substr(i, 2);
        if (substringsA.find(subB) != substringsA.end()) {
          d=subB;
          flag=false;
          break;
        }
      }
      if(flag){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
        cout<<"*"<<d<<"*"<<endl;
      }
    }
  }
  return 0;
}
