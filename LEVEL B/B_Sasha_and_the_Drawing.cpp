#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n,k,squares;
    cin>>n>>k;
    if(k<=4*(n-1)){
      squares=ceil(1.0*k/2);
    }
    else{
      squares=2*(n-1)+k-4*(n-1);
    }
    cout<<squares<<endl;
  }
  return 0;
}