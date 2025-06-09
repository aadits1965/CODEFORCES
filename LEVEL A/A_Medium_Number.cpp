#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c && b>c){
      cout<<b<<endl;
    }
    else if(a>b && a>c && b<c){
      cout<<c<<endl;
    }
    else if(b>a && b>c && a>c){
      cout<<a<<endl;
    }
    else if(b>a && b>c && a<c){
      cout<<c<<endl;
    }
    else if(c>a && b<c && a>b){
      cout<<a<<endl;
    }
    else{
      cout<<b<<endl;
    }
  }
  return 0;
}