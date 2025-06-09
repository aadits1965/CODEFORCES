#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;
  int candles=a;
  while(a/b>0){
    candles = candles + a/b;
    a=a/b+(a%b);
  }
  cout<<candles<<endl;
  return 0;
}
