#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  set<pair<string, string>> s;
  for(int i=0;i<m;i++){
    string a,b;
    cin>>a>>b;
    s.insert({a,b});
  }
  vector<string>ans(n);
  for(int j=0;j<n;j++){
    string c;
    cin>>c;
    for (const auto& p : s) {
      if (p.first == c || p.second == c) {
        if(p.first.length()<=p.second.length()){
          cout<<p.first<<" ";
        }
        else{
          cout<<p.second<<" ";
        }
      }
    }
  }
  cout<<endl;
  return 0;
}
