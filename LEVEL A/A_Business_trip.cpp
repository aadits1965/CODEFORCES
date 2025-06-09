#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int n,sum=0,count=0;
  cin>>n;
  vector<int>arr(12);
  for(int i=0;i<12;i++){
    cin>>arr[i];
  }
  sort(arr.rbegin(),arr.rend());
  if(n==0){
    cout<<"0"<<endl;
  }
  else{
    for(int i=0;i<12;i++){
      sum+=arr[i];
      count++;
      if(sum>=n){
        break;
      }
    }
    if(sum>=n){
      cout<<count<<endl;
    }
    else{
      cout<<"-1"<<endl;
    }
  }
  return 0;
}