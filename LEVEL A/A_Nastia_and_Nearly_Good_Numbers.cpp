#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while(t--) {
    long long n,m;
    cin>>n>>m;
    if(m==1){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
      cout<<n<<" "<<n*m<<" "<<n*(m+1)<<endl;
    }
  }
  return 0;
}