#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n;
    cin>>n;
    for(int i=2*n;i>n;i-=2){
      cout<<i<<" "<<2*n-i+2<<" ";
    }
    cout<<endl;
    int j=n;
    for(int i=1;i<n;i+=2){
      cout<<i<<" "<<j+1<<" ";
      j+=2;
    }
    cout<<endl;
  }
  return 0;
}