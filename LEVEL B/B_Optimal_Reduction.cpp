#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    bool flag = true;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    int firstFaultyIndex = -1;
    for (int i = 1; i < n; i++) {
      if (arr[i] < arr[i - 1]) {
        firstFaultyIndex = i;
        break;
      }
    }
    if (firstFaultyIndex == -1) {
      cout << "YES" << endl;
      continue;
    }
    for (int i = firstFaultyIndex; i < n - 1; i++) {
      if (arr[i] < arr[i + 1]) {
        flag = false;
        break;
      }
    }
    if (flag) {
      cout << "YES" << endl;
    } 
    else {
      cout << "NO" << endl;
    }
  }
  return 0;
}

