#include<bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--){
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
      cin>>arr[i];
    }
    int ans[n];
    ans[0]=501;
    for(int i=0;i<n-1;i++){
      ans[i+1]=ans[i]+arr[i];
    }
    for(int i=0;i<n;i++){
      cout<<ans[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
    