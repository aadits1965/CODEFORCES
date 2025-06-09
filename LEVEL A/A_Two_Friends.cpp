#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n,count=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n;i++){
      if(arr[arr[i]-1]==i+1){
        count++;
        break;
      }
    }
    if(count>0){
      cout<<"2"<<endl;
    }
    else{
      cout<<"3"<<endl;
    }
  }
  return 0;
}