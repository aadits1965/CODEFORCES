#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n,count=0,count1=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]==2){
        count++;
      }
    }
    if(count%2!=0){
      cout<<"-1"<<endl;
    }
    else if(count==0){
      cout<<"1"<<endl;
    }
    else{
      for(int i=0;i<n;i++){
        if(arr[i]==2){
          count1++;
          if(count1==count/2){
            cout<<i+1<<endl;
            break;
          }
        }
      }
    }
  }
  return 0;
}