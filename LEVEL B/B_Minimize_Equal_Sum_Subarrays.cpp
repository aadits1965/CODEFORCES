#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  cout.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int d=arr[0];
    for(int i=0;i<n-1;i++){
      arr[i]=arr[i+1];
    }
    arr[n-1]=d;
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}