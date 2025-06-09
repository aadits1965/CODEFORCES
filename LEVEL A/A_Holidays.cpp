#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  int t;
  cin>>t;
  int b=t%7,a=0;
  if(t%7>2){
    b=2;
  }
  if(t%7==6){
    a=1;
  }
  cout<<2*(t/7)+a<<" "<<2*(t/7)+b<<endl;
  return 0;
}