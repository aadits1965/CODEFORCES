#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    string a,b;
    cin>>a>>b;
    int j=0;
    bool flag=false;
    if(a.size()==b.size()){
      for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]){
          j=i;
          flag=true;
          break;
        }
      }
      if(flag){
        cout<<9*(a.size()-j-1)+b[j]-a[j]<<endl;
      }
      else{
        cout<<"0"<<endl;
      }
    }
    else{
      cout<<(b.size()-1)*9+(b[0]-'0')<<endl;
    }
  }
  return 0;
}