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
    unordered_set<int>unique(arr.begin(),arr.end());
    if(unique.size()==2){
      cout<<n/2+1<<endl;
    }
    else{
      cout<<n<<endl;
    }
  }
  return 0;
}