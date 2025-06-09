#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while(t--) {
    int n,c0=0,c1=0,c2=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]%3==0){
        c0++;
      }
      else if(arr[i]%3==1){
        c1++;
      }
      else{
        c2++;
      }
    }
    int a=c0-n/3;
    int b=c1-n/3;
    int c=c2-n/3;
    if(a<0 && b<0){
      cout<<abs(a)+2*abs(b)<<endl;
    }
    else if(a<0 && c<0){
      cout<<2*abs(a)+abs(c)<<endl;
    }
    else if(b<0 && c<0){
      cout<<abs(b)+2*abs(c)<<endl;
    }
    else{
      if(a<0){
        cout<<2*b+c<<endl;
      }
      else if(b<0){
        cout<<a+2*c<<endl;
      }
      else{
        cout<<2*a+b<<endl;
      }
    }
  }
  return 0;
}