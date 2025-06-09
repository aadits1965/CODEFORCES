#include<bits/stdc++.h>
using namespace std;

long long find_min_sums(const vector<int>& arr, int k) {
  int n = arr.size();
  vector<long long> prefix_sum(n + 1, 0);  
  for (int i = 0; i < n; ++i) {
    prefix_sum[i + 1] = prefix_sum[i] + arr[i];
  }
  vector<long long> suffix_sum(n + 1, 0);  
  for (int i = 0; i < n; ++i) {
    suffix_sum[i + 1] = suffix_sum[i] + arr[n - 1 - i];
  }
  long long min_sum = LONG_LONG_MAX;
  for (int i = 0; i <= k; ++i) {
    if (2 * (k - i) <= n && i <= n) {
      long long current_sum = prefix_sum[2 * (k - i)] + suffix_sum[i];
      min_sum = min(min_sum, current_sum);
    }
  }
  return min_sum;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, k, sum = 0;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        sort(arr.begin(), arr.end());
        long long ans = find_min_sums(arr, k);
        cout << sum - ans << endl;
    }
    return 0;
}
