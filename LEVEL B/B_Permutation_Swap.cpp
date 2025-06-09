#include <bits/stdc++.h>
using namespace std;

vector<int> removeZeros(const vector<int>& arr) {
    vector<int> result;
    for (int num : arr) {
        if (num != 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    vector<int>values(n);
    for(int i=0;i<n;i++){
      values[i]=abs(arr[i]-i-1);
    }
    vector<int>result=removeZeros(values);
    int answer = result[0];
    for (size_t i = 1; i < result.size(); i++) {
      answer = __gcd(answer,result[i]);
    }
    cout << answer << endl;
  }
  return 0;
}