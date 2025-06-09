#include<bits/stdc++.h>
using namespace std;
int main() {
  long long t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for (long long i = 0; i < n; i++) {
      cin >> arr[i];
    }
    unordered_map<long long,long long> prefixsummap;
    int prefixsum = 0;
    int beautifulsegments = 0;
    int end = -1;
    prefixsummap[0] = -1;
    for (int i = 0; i < n; i++) {
      prefixsum += arr[i];
      if (prefixsummap.count(prefixsum) > 0) {
        int index = prefixsummap[prefixsum];
        if (index >= end) {
          beautifulsegments++;
          end = i; 
        }
      }
      prefixsummap[prefixsum] = i;
    }
  cout << beautifulsegments << endl;
  }
  return 0;
}
