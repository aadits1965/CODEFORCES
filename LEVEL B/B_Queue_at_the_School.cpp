#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int n,m;
  cin>>n>>m;
  cin.ignore();
  string s;
  getline(cin,s);
  while(m--){
    for(int i=0;i<n-1;i++){
      if(s[i]=='B' && s[i+1]=='G'){
        s[i]='G';
        s[i+1]='B';
      }
      else{
        continue;
      }
      if(i!=n-2 && s[i+2]=='G'){
        i++;
      }
    }
  }
  cout<<s<<endl;
  return 0;
}