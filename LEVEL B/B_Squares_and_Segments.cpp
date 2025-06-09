#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  int a=0,b=0,g=0;
  for(int i=0;(i+1)*(1+2)<=1000000000 && i*(i+1)<=1000000000;i++){
    if(t<=(i+1)*(i+2) && t>i*(i+1)){
      a=i*(i+1);
      b=(i+1)*(i+2);
      g=2*(i+1);
      break;
    }
  }
  int d=b-a;
  if(t>a && t<=a+d/2){
    cout<<g<<endl;
  }
  else{
    cout<<g+1<<endl;
  }
  return 0;
}