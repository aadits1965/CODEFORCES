#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int>arr1(n);
    vector<int>arr2(n);
    for (int i=0;i<n;i++){
      cin>>arr1[i];
    } 
    for (int i=0;i<n;i++){
      cin>>arr2[i];
    }
    int maximum = INT_MIN;
    int total = 0;
    for (int i = 0; i < n; ++i){
      total+=max(arr1[i],arr2[i]);
    }
    for (int i = 0; i < n; ++i) {
      int current = total + min(arr1[i], arr2[i]);
      maximum = max(maximum, current);
    }
    cout << maximum << endl;
  }
  return 0;
}


