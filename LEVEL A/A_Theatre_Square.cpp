#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n,m,a,b,c;
  cin>>n>>m>>a;
  if(n%a!=0 && m%a!=0){
    b=n/a+1;
    c=m/a+1;
  }
  else if(n%a==0 && m%a!=0){
    b=n/a;
    c=m/a+1;
  }
  else if(n%a!=0 && m%a==0){
    b=n/a+1;
    c=m/a;
  }
  else{
    b=n/a;
    c=m/a;
  }
  cout<<b*c<<endl;
  return 0;
}
