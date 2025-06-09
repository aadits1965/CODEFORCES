#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    int n,k,count=0;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
      if((abs(arr[i]-i-1))%k==0){
        count++;
      }
    }
    if(count==n){
      cout<<"0"<<endl;
    }
    else if(count==n-2){
      cout<<"1"<<endl;
    }
    else{
      cout<<"-1"<<endl;
    }
  }
  return 0;
}