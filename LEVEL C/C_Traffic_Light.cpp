#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    char c;
    cin>>n>>c;
    string a;
    cin>>a;
    a+=a;
    int ans=0;
    if(n==1 || c=='g'){
      cout<<"0"<<endl;
    }
    else{
      vector<int>green;
      for(int i=0;i<2*n;i++){
        if(a[i]=='g'){
          green.push_back(i); 
        }
      }
      for(int i=0;i<2*n;i++){
        if(a[i]==c){
          for(int j=0;j<green.size();j++){
            if(green[j]>i){
              ans=max(ans,green[j]-i);
              break;
            }
          }
        }
      }
      cout<<ans<<endl;
    }
  }
  return 0;
}