#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  long long t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    long long sum1=0;
    long long sum2=0;
    vector<long long>arr1(n);
    for (long long i = 0; i < n; i++) {
      cin >> arr1[i];
      sum1+=arr1[i];
    }
    vector<long long>arr2(n);
    for (long long i = 0; i < n; i++) {
      cin >> arr2[i];
      sum2+=arr2[i];
    }
    long long min1=arr1[0];
    long long min2=arr2[0];
    for (long long i = 0; i < n-1; i++) {
      if(arr1[i+1]<min1){
        min1=arr1[i+1];
      }
    }
    for (long long i = 0; i < n-1; i++) {
      if(arr2[i+1]<min2){
        min2=arr2[i+1];
      }
    }
    long long ans1=n*min1+sum2;
    long long ans2=n*min2+sum1;
    if(ans1>ans2){
      cout<<ans2<<endl;
    }
    else{
      cout<<ans1<<endl;
    }
  }
  return 0;
}