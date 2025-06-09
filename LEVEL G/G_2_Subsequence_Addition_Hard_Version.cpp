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
    sort(arr.begin(),arr.end());
    long long sum=1;
    bool flag=true;
    if(n==1 && arr[0]!=1){
      cout<<"NO"<<endl;
      continue;
    }
    for(int i=1;i<n;i++){
      if(arr[i]>sum){
        cout<<"NO"<<endl;
        flag=false;
        break;
      }
      else{
        sum+=arr[i];
      }
    }
    if(flag){
      cout<<"YES"<<endl;
    }
  }
  return 0;
}