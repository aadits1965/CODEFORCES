#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n,x,count=0;
    cin>>n>>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr.rbegin(),arr.rend());
    while(!arr.empty()){
      count++;
      for(int i=0;i<x && i<arr.size();i++){
        if(arr[i]>0){
          arr[i]--;
          if(arr[i]==0){
            arr.erase(arr.begin() + i);
          }
        }
      }
    }
    cout<<count<<endl;
  }
  return 0;
}