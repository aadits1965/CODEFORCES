#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n,countl=0,ans=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
      if(s[i]=='('){
        countl++;
      }
      else{
        if(countl>0){
          countl--;
        }
        else{
          ans++;
        }
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}