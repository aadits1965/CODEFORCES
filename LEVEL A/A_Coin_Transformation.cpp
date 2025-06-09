#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    long long a=sqrtl(n);
    long long b=log2(a);
    cout<<(long long)(pow(2,floor(b)))<<endl;
  }
  return 0;
}
