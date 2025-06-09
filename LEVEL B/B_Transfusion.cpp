#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t; 
  while (t--) {
    int n;
    cin >> n; 
    vector<int> arr(n);
    long long sum = 0; 
    for (int i = 0; i < n; ++i) {
      cin >> arr[i];  
      sum += arr[i];
    }
    if (sum % n != 0) {
      cout << "NO" << endl;
    } 
    else {
      long long target = sum / n;  
      bool possible = false;
      for (int i = 0; i < n-2; ++i) {
        if(arr[i]!=target){
          arr[i+2]-=target-arr[i];
          arr[i]=target;
        }
        else{
          continue;
        }
      }
      if(arr[n-1]==target && arr[n-2]==target){
        possible=true;
      }
      if (possible) {
        cout << "YES" << endl;  
      } 
      else {
        cout << "NO" << endl;  
      }
    }
  }
  return 0;
}



