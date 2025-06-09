#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  getline(cin,s);
  if(s.size()>2){
    vector<char>ans;
    for(int i=1;i<s.length();i+=3){
      ans.push_back(s[i]);
    }
    set<char>uniqueChars(ans.begin(), ans.end());
    cout<<uniqueChars.size()<<endl;
  }
  else{
    cout<<"0"<<endl;
  }
  return 0;
}