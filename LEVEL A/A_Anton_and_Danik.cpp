#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a=0,d=0;
  cin>>n;
  char arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]=='A'){
      a++;
    }
    else{
      d++;
    }
  }
  if(a<d){
    cout<<"Danik"<<endl;
  }
  else if(a==d){
    cout<<"Friendship"<<endl;
  }
  else{
    cout<<"Anton"<<endl;
  }
  return 0;
}