#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;  
  while (t--) {
    int n;
    cin >> n;    
    long long sum = 0;
    vector<int> arr(n);
    priority_queue<int> max_heap;     
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }    
    for (int i = 0; i < n; i++) {
      if (arr[i] == 0) {
        if (!max_heap.empty()) {
          sum += max_heap.top();
          max_heap.pop();
        }
      } 
      else {
        max_heap.push(arr[i]);
      }
    }    
    cout << sum << endl;
  } 
  return 0;
}
