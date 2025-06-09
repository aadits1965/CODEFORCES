#include<bits/stdc++.h>
using namespace std;
int main(){
  long long t;
  cin >> t;
  while (t--){
    long long n;
    cin>>n;
    vector<long long>arr(n);
    for(long long i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    if(arr[0]<0){
      cout<<arr[0]<<endl;
    }
    else{
      cout<<arr[n-1]<<endl;
    }
  }
  return 0;
}