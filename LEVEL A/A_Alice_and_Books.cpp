#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int d=arr[n-1];
    sort(arr.begin(),arr.end() - 1);
    cout<<arr[n-2]+d<<endl;;
  }
  return 0;
}