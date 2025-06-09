#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  long long t;
  cin>>t;
  while(t--){
    long long n,magic_count=0;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cin>>arr[i][j];
      }
    }
    for (int d = 1-n; d < n; ++d) {
      int min_value = 0; 
      for (int i = 0; i < n; ++i) {
        int j = i + d; 
        if (j >= 0 && j < n) { 
          min_value = min(min_value, arr[i][j]); 
        }
      }
      if (min_value < 0) {
        magic_count += abs(min_value); 
      }
    }
    cout<<magic_count<<endl;
  }
  return 0;
}