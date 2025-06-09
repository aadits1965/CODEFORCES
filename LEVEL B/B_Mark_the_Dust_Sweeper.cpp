#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    int n,count=0;
    long long sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
      sum+=arr[i];
    }
    for(int i=0;i<n-1;i++){
      if(arr[i]==0){
        continue;
      }
      else{
        for(int j=i+1;j<n-1;j++){
          if(arr[j]==0){
            count++;
          }
        }
        break;
      }
    }
    cout<<sum-arr[n-1]+count<<endl;
  }
  return 0;
}