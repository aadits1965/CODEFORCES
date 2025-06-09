#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  cout.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n<5){
      cout<<"-1"<<endl;
    }
    else{
      if(n%2==0){
        for(int i=n;i>0;i-=2){
          if(i==4){
            continue;
          }
          else{
            cout<<i<<" ";
          }
        }
        cout<<"4 5 ";
        for(int i=n-1;i>0;i-=2){
          if(i==5){
            continue;
          }
          else{
            cout<<i<<" ";
          }
        }
        cout<<endl;
      }
      else{
        for(int i=n-1;i>0;i-=2){
          if(i==4){
            continue;
          }
          else{
            cout<<i<<" ";
          }
        }
        cout<<"4 5 ";
        for(int i=n;i>0;i-=2){
          if(i==5){
            continue;
          }
          else{
            cout<<i<<" ";
          }
        }
        cout<<endl;
      }
    }
  }
  return 0;
}