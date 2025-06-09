#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  long long n,sum=0,count=0;
  cin>>n;
  vector<int>arr(n);
  for(long long i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
  }
  sort(arr.rbegin(),arr.rend());
  long long twin=0;
  for (long long i = 0; i < n; i++) {
    twin += arr[i];      
    sum -= arr[i];         
    count++;     
    if (twin > sum) {
      break;            
    }
  }
  cout << count << endl;    
  return 0;
}