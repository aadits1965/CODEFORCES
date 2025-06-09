#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin>>s;
    int x=0,y=0;
    bool flag=false;
    for(int i=0;i<n;i++){
      if(s[i]=='L'){
        x--;
      }
      else if(s[i]=='R'){
        x++;
      }
      else if(s[i]=='U'){
        y++;
      }
      else{
        y--;
      }
      if(x==1 && y==1){
        flag=true;
        cout<<"YES"<<endl;
        break;
      }
    }
    if(!flag){
      cout<<"NO"<<endl;
    }
  }
  return 0;
}
