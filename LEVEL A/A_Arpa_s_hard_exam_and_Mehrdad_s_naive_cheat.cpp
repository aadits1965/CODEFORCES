#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  if(n==0){
    cout<<"1"<<endl;
  }
  else{
    int m=n%4;
    if(m==1){
      cout<<"8"<<endl;
    }
    else if(m==2){
      cout<<"4"<<endl;
    }
    else if(m==3){
      cout<<"2"<<endl;
    }
    else{
      cout<<"6"<<endl;
    }
  }
  return 0;
}