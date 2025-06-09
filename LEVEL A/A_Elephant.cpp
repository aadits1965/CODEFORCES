#include<bits/stdc++.h>
using namespace std;
int main(){
  int x,a,steps=0;
  cin>>x;
  int i=5;
  while(x>0){
    steps+=x/i;
    x=x%i;
    i--;
  }
  cout<<steps<<endl;
  return 0;
}