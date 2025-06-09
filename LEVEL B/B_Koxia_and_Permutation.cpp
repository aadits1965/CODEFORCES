#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n,k;
    cin>>n>>k;
    if(k==1 || k==n){
      for(int i=1;i<=n;i++){
        cout<<i<<" ";
      }
      cout<<endl;
    }
    else{
      int j=n,count=0;
      int d=0;
      int l=0;
      bool flag=true;
      while(flag){
        l++;
        for(int i=j;i>=j-k+2;i--){
          cout<<i<<" ";
          d=i;
          count++;
          if(count==n){
            flag=false;
            break;
          }
        }
        if(!flag){
          break;
        }
        cout<<l<<" ";
        count++;
        j=d-1;
        if(count==n){
          break;
        }
      }
      cout<<endl;
    }
  }
  return 0;
}