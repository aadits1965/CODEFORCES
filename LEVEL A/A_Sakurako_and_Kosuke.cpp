#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  long long t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    if(n%2!=0){
      cout<<"Kosuke"<<endl;
    }
    else{
      cout<<"Sakurako"<<endl;
    }
  }
  return 0;
}