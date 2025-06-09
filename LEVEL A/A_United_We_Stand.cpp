#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    int n,count=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=n-1;i>0;i--){
      if(arr[i-1]==arr[n-1]){
        count++;
      }
    }
    if(arr[0]==arr[n-1]){
      cout<<"-1"<<endl;
    }
    else{
      cout<<n-1-count<<" "<<count+1<<endl;
      for(int i=0;i<n-1-count;i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
      for(int i=n-1-count;i<n;i++){
        cout<<arr[n-1]<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}