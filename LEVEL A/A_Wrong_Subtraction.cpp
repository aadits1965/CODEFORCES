#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n,k;
  cin>>n>>k;
  while(k>0){
    if(n%10==0){
      n=n/10;
      k--;
    }
    else{
      n--;
      k--;
    }
  }
  cout<<n<<endl;
  return 0;
}