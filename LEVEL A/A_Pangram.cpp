#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  cin.ignore();
  string s;
  getline(cin,s);
  for(char& i : s) {
    i = tolower(i);
  }
  unordered_set<char>uniqueChars;
  for (char i : s) {
    uniqueChars.insert(i);
  }
  if(uniqueChars.size()==26){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
  return 0;
}