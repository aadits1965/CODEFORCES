#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
    int n;
    cin>>n;
    if(n==1 || n==3){
      cout<<"-1"<<endl;
    }
    else if(n==2){
      cout<<"66"<<endl;
    }
    else if(n==4){
      cout<<"3366"<<endl;
    }
    else if(n%4==0){
      for(int i=0;i<n/4-1;i++){
        cout<<"3333";
      }
      cout<<"3366"<<endl;
    }
    else if(n%4==2){
      for(int i=0;i<n/4;i++){
        cout<<"3333";
      }
      cout<<"66"<<endl;
    }
    else if(n==5){
      cout<<"36366"<<endl;
    }
    else if(n%4==1){
      for(int i=0;i<n/4-1;i++){
        cout<<"3333";
      }
      cout<<"36366"<<endl;
    }
    else if(n==7){
      cout<<"3336366"<<endl;
    }
    else if(n%4==3){
      for(int i=0;i<n/4-1;i++){
        cout<<"3333";
      }
      cout<<"3336366"<<endl;
    }
  }
  return 0;
}