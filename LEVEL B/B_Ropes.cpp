#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr.begin(),arr.end());
  double l=0;
  double r=arr[n-1]+1;
  cout<<setprecision(20);
  for(int t=0;t<100;t++){
    double m=(l+r)/2;
    int sum=0;
    for(int i=0;i<n;i++){
      sum+=floor(arr[i]/m);
    }
    if(sum<k){
      r=m;
    }
    else{
      l=m;
    }
  }
  cout<<l<<endl;
  return 0;
}