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
    vector<int>ans;
    for(int i=0;i<n/2;i++){
      if(arr[i]!=arr[n-i-1]){
        ans.push_back(abs(arr[i]-arr[n-1-i]));
      }
    }
    if(n==1){
      cout<<"0"<<endl;
      continue;
    }
    if(ans.empty()){
      cout<<"0"<<endl;
      continue;
    }
    int result = ans[0];
    for (int i = 1; i < ans.size(); i++) {
        result = __gcd(result, ans[i]);
    }

    cout << result << endl;
    
  }
  return 0;
}