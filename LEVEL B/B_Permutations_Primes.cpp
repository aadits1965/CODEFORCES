#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n,count=0,d=0;
    cin>>n;
    if(n==1){
      cout<<"1"<<endl;
    }
    else if(n==2){
      cout<<"2 1"<<endl;
    }
    else if(n==3){
      cout<<"2 1 3"<<endl;
    }
    else if(n==4){
      cout<<"2 1 4 3"<<endl;
    }
    else if(n==5){
      cout<<"2 4 1 5 3"<<endl;
    }
    else{
      cout<<"2 ";
      for(int i=4;count<(n-3)/2;i++){
        cout<<i<<" ";
        count++;
        d=i+1;
      }
      cout<<"1 ";
      for(int i=d;i<=n;i++){
        cout<<i<<" ";
      }
      cout<<"3";
      cout<<endl;
    }
  }
  return 0;
}