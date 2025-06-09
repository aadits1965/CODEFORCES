#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    long long k;
    cin>>k;
    long long n;
    long long root = sqrt(k);
    n=k+sqrt(k);
    long long a=(long(sqrt(k))+1)*(long(sqrt(k))+1);
    if(root*root == k){
      cout<<n<<endl;
    }
    else{
      if(n>=a){
        cout<<(n+1)<<endl;
      }
      else{
        cout<<n<<endl;
      }
    }
  }
  return 0;
}
