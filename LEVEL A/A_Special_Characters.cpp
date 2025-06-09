#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n,count=0,flag=0;
    cin>>n;
    string result;
    if(n%2!=0){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
      while(count<n){
        while(flag<2 && count<n){
          cout<<"A";
          flag++;
          count++;
        }
        flag=0;
        while(flag<2 && count<n){
          cout<<"B";
          flag++;
          count++;
        }
        flag=0;
      }
      cout<<result<<endl;
    }
  }
  return 0;
}