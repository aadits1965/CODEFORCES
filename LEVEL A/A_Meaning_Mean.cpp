#include<bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    while(arr.size()>1){
      int f=arr[0],s=arr[1]; 
      int average=((f+s)/2);
      arr.erase(arr.begin(),arr.begin()+2);
      arr.insert(arr.begin(),average);
    }
    cout<<arr[0]<<endl;
  }
  return 0;
}