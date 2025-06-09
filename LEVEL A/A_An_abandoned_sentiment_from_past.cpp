#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int n,k,count=0;
  cin>>n>>k;
  vector<int>arr(n);
  vector<int>arr2(k);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<k;i++){
    cin>>arr2[i];
  }
  if(k>1){
    cout<<"YES"<<endl;
  }
  else{
    for(int i=0;i<n;i++){
      if(arr[i]==0){
        arr[i]=arr2[0];
        break;
      }
    }
    for(int i=0;i<n-1;i++){
      if(arr[i+1]>arr[i]){
        count++;
      }
      else{
        break;
      }
    }  
    if(count==n-1){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }
  }
  return 0;
}