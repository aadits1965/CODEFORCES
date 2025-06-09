#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  cout.tie(nullptr); 
  int t;
  cin>>t;
  while(t--){
    long long n,countmin=0,countmax=0;
    cin>>n;
    vector<long long>arr(n);
    for(long long i=0;i<n;i++){
      cin>>arr[i];
    }
    long long maximum=arr[0];
    long long minimum=arr[0];
    for(long long i=0;i<n-1;i++){
      if(arr[i+1]>maximum){
        maximum=arr[i+1];
      }
      if(arr[i+1]<minimum){
        minimum=arr[i+1];
      }
    }
    for(long long i=0;i<n;i++){
      if(arr[i]==minimum){
        countmin++;
      }
      if(arr[i]==maximum){
        countmax++;
      }
    }
    if(minimum==maximum){
      cout<<countmax*(countmin-1)<<endl;
    }
    else{
      cout<<2*countmin*countmax<<endl;
    }
  }
  return 0;
}