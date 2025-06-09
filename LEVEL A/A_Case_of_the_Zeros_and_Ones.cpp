#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  cout.tie(nullptr); 
  int t,count1=0,count0=0;
  cin>>t;
  string s;
  cin>>s;
  for(int i=0;i<t;i++){
    if(s[i]=='1'){
      count1++;
    }
    else{
      count0++;
    }
  }
  cout<<abs(count0-count1)<<endl;
  return 0;
}