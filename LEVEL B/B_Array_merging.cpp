#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> getMaxContinuousCounts(const vector<int>& arr) {
  unordered_map<int, int> max_count_map;
  int current_count = 1;
  for (size_t i = 1; i < arr.size(); ++i) {
    if (arr[i] == arr[i - 1]) {
      current_count++;
    } 
    else {
      max_count_map[arr[i - 1]] = max(max_count_map[arr[i - 1]], current_count);
      current_count = 1;
    }
  }
  if (!arr.empty()) {
    max_count_map[arr.back()] = max(max_count_map[arr.back()], current_count);
  }  
  return max_count_map;
}

pair<int, int> findMaxSum(const vector<int>& arr1, const vector<int>& arr2) {
  unordered_map<int, int> count_arr1 = getMaxContinuousCounts(arr1);
  unordered_map<int, int> count_arr2 = getMaxContinuousCounts(arr2);
  unordered_set<int> unique_elements;
  for (const auto& entry : count_arr1) {
    unique_elements.insert(entry.first); 
  }
  for (const auto& entry : count_arr2) {
    unique_elements.insert(entry.first); 
  }
  int max_element = -1;
  int max_sum = 0;
  for (int element : unique_elements) {
    int sum = count_arr1[element] + count_arr2[element];
    if (sum > max_sum) {
      max_sum = sum;
      max_element = element;
    }
  }  
  return {max_element, max_sum};
}

int main() {
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>arr1(n);
    vector<int>arr2(n);
    for(int i=0;i<n;i++){
      cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
      cin>>arr2[i];
    }
    pair<int, int> result = findMaxSum(arr1, arr2);
    if (result.first != -1) {
      cout << result.second << endl;
    }     
  }  
  return 0;
}