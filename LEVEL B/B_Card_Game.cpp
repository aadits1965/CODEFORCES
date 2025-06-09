#include<bits/stdc++.h>
using namespace std;

int winner(int x,int y){
  if(x<y){
    return -1;
  }
  else if(x==y){
    return 0;
  }
  else{
    return 1;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a,b,c,d,count=0;
    cin>>a>>b>>c>>d;
    if(winner(a,c)+winner(b,d)>=1){
      count++;
    }
    if(winner(a,d)+winner(b,c)>=1){
      count++;
    }
    if(count==0){
      cout<<"0"<<endl;
    }
    else if(count==1){
      cout<<"2"<<endl;
    }
    else{
      cout<<"4"<<endl;
    } 
  }
  return 0;
}