#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n,m,count=0,d=0;
    cin>>n>>m;
    int j=1;
    bool flag=false;
    for(int i=1;count<n;i++){
      if(n-count<=m-i+1){
        cout<<i<<" ";
        d=i;
        i+=j-1;
        j++;
        count++;
      }
      else{
        flag=true;
        break;
      }
    }
    if(flag){
      for(int i=d+1;count<n;i++){
        cout<<i<<" ";
        count++;
      }
    }
    cout<<endl;
  }
  return 0;
}