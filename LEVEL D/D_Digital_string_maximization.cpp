#include <bits/stdc++.h>
using namespace std;

string maximize_string(string s) {
  int n = s.size();
  for (int i = 1; i < n; i++) {
    while (i > 0 && s[i] > s[i - 1]+1 && s[i] != '0') {
      s[i]--;
      swap(s[i],s[i-1]);
      i--; 
    }
  }
  return s;
}

int main() {
  int t;
  cin >> t; 
  while (t--) {
    string s;
    cin >> s; 
    cout << maximize_string(s) << endl;
  }
  return 0;
}


