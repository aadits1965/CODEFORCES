#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    long long n,k;
    cin>>n>>k;
    long long number=0;
    if(k==1){
      cout<<n<<endl;
    }
    else{
      while(n>0){
        number+=n%k;
        n/=k;
      }
      cout<<number<<endl;
    }
  }
  return 0;
}