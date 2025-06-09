#include <bits/stdc++.h>
using namespace std;

vector<string> markOccurrences(const vector<int>& arr) {
  vector<string> result(arr.size(), "");
  unordered_map<int, int> count;
  for (int i = 0; i < arr.size(); ++i) {
    int num = arr[i];
    if (count[num] < 26) {
      char mark = 'a' + count[num]; 
      result[i] = string(1, mark);
      count[num]++;
    }
    else {
      result[i] = "";
    }
  }
  return result;
}

int main() {
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    vector<string> result = markOccurrences(arr);
    for (const auto& str : result) {
      cout << str;
    }
    cout << endl;
  }
  return 0;
}
