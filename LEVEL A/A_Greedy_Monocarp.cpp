#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    long long n,m,sum=0,count=0;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr.rbegin(),arr.rend());
    for(int i=0;i<n;i++){
      sum+=arr[i];
      if(sum>m){
        sum=sum-arr[i];
        cout<<m-sum<<endl;
        count++;
        break;
      }
      else if(sum==m){
        cout<<"0"<<endl;
        count++;
        break;
      }
    }
    if(count==0){
      cout<<m-sum<<endl;
    }
  }
  return 0;
}