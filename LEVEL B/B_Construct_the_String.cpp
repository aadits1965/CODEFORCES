#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  cout.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n,a,b;
    cin>>n>>a>>b;
    string s = "abcdefghijklmnopqrstuvwxyz" ;
    string u = s.substr(0,b);
    for(int i=0;i<n/b;i++){
      cout<<u;
    }
    if(n%b==0){
      cout<<endl;
    }
    else{
      cout<<u.substr(0,n%b)<<endl;
    }
  }
  return 0;
}