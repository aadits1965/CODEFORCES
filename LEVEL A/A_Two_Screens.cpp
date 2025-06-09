#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  cin.ignore();
  while (t--){
    int count=0;
    string s;
    getline(cin,s);
    string t;
    getline(cin,t);
    if(s[0]==t[0]){
      for(int i=0;i<min(s.size(),t.size());i++){
        if(s[i]==t[i]){
          count++;
        }
        else{
          break;
        }
      }
      cout<<t.size()+s.size()-count+1<<endl;
    }
    else{
      cout<<t.size()+s.size()<<endl;
    }
  }
  return 0;
}