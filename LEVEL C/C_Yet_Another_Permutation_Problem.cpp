#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while (t--){
    int n;
    cin>>n;
    for(int i=1;i<=(n+1)/2;i++){
      for(int j=0;(2*i-1)*pow(2,j)<=n;j++){
        cout<<(2*i-1)*pow(2,j)<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}