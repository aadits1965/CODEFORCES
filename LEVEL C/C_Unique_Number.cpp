#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  cout.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n<=9){
      cout<<n<<endl;
    }
    else if(n<=17){
      cout<<n-9<<"9"<<endl;
    }
    else if(n<=24){
      cout<<n-17<<"89"<<endl;
    }
    else if(n<=30){
      cout<<n-24<<"789"<<endl;
    }
    else if(n<=35){
      cout<<n-30<<"6789"<<endl;
    }
     else if(n<=39){
      cout<<n-35<<"56789"<<endl;
    }
    else if(n<=42){
      cout<<n-39<<"456789"<<endl;
    }
    else if(n<=44){
      cout<<n-42<<"3456789"<<endl;
    }
    else if(n<=45){
      cout<<n-44<<"23456789"<<endl;
    }
    else{
      cout<<"-1"<<endl;
    }
  }
  return 0;
}