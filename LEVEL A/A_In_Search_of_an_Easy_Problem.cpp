#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int n,count=0;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    if(arr[i]==1){
      count++;
      break;
    }
  }
  if(count>0){
    cout<<"HARD"<<endl;
  }
  else{
    cout<<"EASY"<<endl;
  }
  return 0;
}