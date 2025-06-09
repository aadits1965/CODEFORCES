#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int a,b;
    cin>>a>>b;
    if(a==1 && b==2){
      cout<<"3"<<endl;
    }
    else if(a==1 && b!=2){
      cout<<"2"<<endl;
    }
    else{
      cout<<"1"<<endl;
    }
  }
  return 0;
}