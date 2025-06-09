#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long a,b,count=0;
    cin>>a>>b;
    long long x;
    if(b%a==0){
      x=b*b/a;
    }
    else{
      x=a*b/__gcd(a,b);
    }
    cout<<x<<endl;
  }
  return 0;
}