#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long x,m;
    cin>>x;
    if(x<=14){
      cout<<"NO"<<endl;
    }
    else{
      m=x%14;
      if(m>=1 && m<=6){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }

  }
  return 0;
}

