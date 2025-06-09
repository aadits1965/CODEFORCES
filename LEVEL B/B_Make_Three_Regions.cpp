#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin >> t;
  while(t--) {
    int n,count=0;
    cin>>n;
    string r,s;
    cin>>r>>s;
    for(int i=1;i<n-1;i++){
      if(r[i-1]=='.' && r[i]=='.' && r[i+1]=='.' && s[i-1]=='x' && s[i]=='.' && s[i+1]=='x'){
        count++;
      }
    }
    for(int i=1;i<n-1;i++){
      if(r[i-1]=='x' && r[i]=='.' && r[i+1]=='x' && s[i-1]=='.' && s[i]=='.' && s[i+1]=='.'){
        count++;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}