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
      if(arr[i]==0){
        count++;
      }
    }
    if(n%2==0){
      if(count<=(n/2)){
        cout<<"0"<<endl;
      }
      else if(count==n){
        cout<<"1"<<endl;
      }
      else{
        unordered_set<int> numSet(arr.begin(), arr.end());
        if(numSet.size()==2){
          if(numSet.count(1)){
            cout<<"2"<<endl;
          }
          else{
            cout<<"1"<<endl;
          }
        }
        else{
          cout<<"1"<<endl;
        }
      }
    }
    else{
      if(count<=((n+1)/2)){
        cout<<"0"<<endl;
      }
      else if(count==n){
        cout<<"1"<<endl;
      }
      else{
        unordered_set<int> numSet(arr.begin(), arr.end());
        if(numSet.size()==2){
          if(numSet.count(1)){
            cout<<"2"<<endl;
          }
          else{
            cout<<"1"<<endl;
          }
        }
        else{
          cout<<"1"<<endl;
        }
      }
    }
  }
  return 0;
}