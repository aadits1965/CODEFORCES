#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    vector<int>arr2(n);
    arr2=arr;
    sort(arr2.rbegin(),arr2.rend());
    if(arr2==arr){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
      int a=arr2[1];
      arr2[1]=arr2[n-1];
      arr2[n-1]=a;
      for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}