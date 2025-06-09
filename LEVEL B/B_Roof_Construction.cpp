#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    for(int i=0;pow(2,i)<n;i++){
      cout<<pow(2,i)<<" ";
    }
    cout<<"0 ";
    for(int i=1;i<n;i++){
      if(log2(i)!=floor(log2(i))){
        cout<<i<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}
