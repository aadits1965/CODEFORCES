#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    deque<int> result;
    result.push_back(arr[0]);
    int minimum = arr[0];
    for(int i = 1; i < n; i++) {
      if(arr[i] < minimum) {
        minimum = arr[i];
        result.push_front(arr[i]);
      } 
      else {
        result.push_back(arr[i]); 
      }
    }
    for(int i = 0; i < n; i++) {
      cout << result[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
