#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  getline(cin,s);
  unordered_set<char>distinctchars;
  for(char c:s){
    distinctchars.insert(c);
  }
  int distinctcount=distinctchars.size();
  if(distinctcount%2!=0){
    cout<<"IGNORE HIM!"<<endl;
  }
  else{
    cout<<"CHAT WITH HER!"<<endl;
  }
  return 0;
}