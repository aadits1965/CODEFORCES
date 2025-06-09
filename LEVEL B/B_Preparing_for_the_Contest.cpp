#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      arr[i]=n-i;
    }
    vector<int>karr(k);
    for(int i=0;i<k;i++){
      karr[i]=arr[n-1-i];
    }
    arr.resize(arr.size() - k);
    karr.insert(karr.end(),arr.begin(),arr.end());
    for(int i=0;i<n;i++){
      cout<<karr[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}