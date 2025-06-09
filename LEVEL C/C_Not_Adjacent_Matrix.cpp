#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin>>n;
    if(n==1){
      cout<<n<<endl;
    }
    else if(n==2){
      cout<<"-1"<<endl;
    }
    else{
      vector<int> result;
      int left = 1, right = n * n;
      for (int i = 0; i < n * n; ++i) {
        if (i % 2 == 0) {
          result.push_back(left++);
        } 
        else {
          result.push_back(right--);
        }
      }
      int a=result[0];
      result[0]=result[n*n-1];
      result[n*n-1]=a;
      for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
          cout << result[i * n + j] << " ";
        }
        cout << endl; 
      }
    }
  }
  return 0;
}