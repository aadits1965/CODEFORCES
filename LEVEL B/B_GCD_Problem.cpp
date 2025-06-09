#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  cout.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin >> n;
    if(n%2==0){
      int a=(n-1)/2;
      int b=a+1;
      while(__gcd(a,b)!=1){
        a--;
        b++;
      }
      cout<<a<<" "<<b<<" "<<"1"<<endl;
    }
    else{
      int a=(n-1)/2+1;
      int b=(n-1)/2-1;
      while(__gcd(a,b)!=1){
        a--;
        b++;
      }
      cout<<a<<" "<<b<<" "<<"1"<<endl;
    }
  }
  return 0;
}