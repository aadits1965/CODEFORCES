#include <bits/stdc++.h>
using namespace std;
bool areArraysEqual(int arr1[], int arr2[], int size) {
  for (int i = 0; i < size; ++i) {
    if (arr1[i] != arr2[i]) {
      return false; 
    }
  }
  return true;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  cout.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n,c,d;
    cin>>n>>c>>d;
    vector<int>arr(n*n);
    for(int i=0;i<n*n;i++){
      cin>>arr[i];
    }
    int minimum = *min_element(arr.begin(), arr.end());
    int arr1[n][n];
    arr1[0][0] = minimum;
    for (int i = 1; i < n; i++) {
      arr1[i][0] = arr1[i - 1][0] + c; 
    }
    for (int i = 0; i < n; i++) {
      for (int j = 1; j < n; j++) {
        arr1[i][j] = arr1[i][j - 1] + d;  
      }
    }
    vector<int> arr2(n * n);
    int index = 0;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        arr2[index++] = arr1[i][j];
      }
    }
    sort(arr.begin(),arr.end());
    sort(arr2.begin(),arr2.end());
    if (areArraysEqual(arr.data(), arr2.data(), n*n)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}