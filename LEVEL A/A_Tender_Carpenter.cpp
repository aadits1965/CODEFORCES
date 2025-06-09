#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    bool flag=false;
    vector<long long>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
      if(2*arr[i]>arr[i+1] && 2*arr[i+1]>arr[i]){
        flag=true;
        break;
      }
    }
    if(flag){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}
