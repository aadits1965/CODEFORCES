#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string r,s;
    cin>>r>>s;
    bool flag=false;
    for(int i=0;i<n;i++){
      if((r[i]=='R' && (s[i]=='B' || s[i]=='G')) || (s[i]=='R' && (r[i]=='B' || r[i]=='G'))){
        cout<<"NO"<<endl;
        flag=true;
        break;
      }
    }
    if(!flag){
      cout<<"YES"<<endl;
    }
  }
  return 0;
}
