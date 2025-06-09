#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  cout.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    char d,e,f;
    if((a+b)%2==0){
      f='1';
    }
    else{
      f='0';
    }
    if((a+c)%2==0){
      e='1';
    }
    else{
      e='0';
    }
    if((c+b)%2==0){
      d='1';
    }
    else{
      d='0';
    }
    cout<<d<<" "<<e<<" "<<f<<endl;
  }
  return 0;
}