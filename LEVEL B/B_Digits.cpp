#include<bits/stdc++.h>
using namespace std;

long long factorial(int n) {
  long long result = 1;
  for (int i = 1; i <= n; ++i) {
    result *= i;  
  }
  return result;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,d;
    cin>>n>>d;
    cout<<"1 ";
    if(n>=3 || n*d%3==0){
      cout<<"3 ";
    }
    if(d==5){
      cout<<"5 ";
    }
    if(n>=3 || d==7){
      cout<<"7 ";
    }
    if(n>=6 || factorial(n)*d%9==0){
      cout<<"9 ";
    }
    cout<<endl;
  }
  return 0;
}
