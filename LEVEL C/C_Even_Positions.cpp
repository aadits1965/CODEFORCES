#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t;
  cin >> t;
  while(t--) {
    int n,ans=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=1;i<n;i++){
      if(s[i]=='_'){
        continue;
      }
      else if(s[i]=='('){
        ans+=3;
      }
      else{
        ans++;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}