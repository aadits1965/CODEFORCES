#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    long long n,sum=0,product=1;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
      product*=arr[i];
    }
    sum=product+n-1;
    cout<<2022*sum<<endl;
  }
  return 0;
}