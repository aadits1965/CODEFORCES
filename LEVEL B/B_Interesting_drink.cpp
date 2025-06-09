#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int q;
    cin>>q;
    while(q--){
      int m;
      cin>>m;
      auto it=lower_bound(arr.begin(), arr.end(), m+0.5);
      cout<<distance(arr.begin(),it)<<endl;
    }
  return 0;
}
