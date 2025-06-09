#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
int main() {
  int t;
  cin >> t;
  while (t--) {
    // long long n, sum = 0;
    // cin >> n;
    // vector<int> arr(n);
    // for (int i = 0; i < n; i++) {
    //   cin >> arr[i];
    // }
    // if (n < 2) {
    //   cout << "0" << endl;
    //   continue;
    // }
    // long long prefix_sum = 0;
    // unordered_set<long long> seen_prefix_sums;
    // unordered_map<long long, int> prefix_sum_count;
    // for (int i = 0; i < n - 1; i++) {  
    //   prefix_sum += arr[i];
    //   seen_prefix_sums.insert(prefix_sum);
    //   prefix_sum_count[prefix_sum] = i + 1; 
    // }
    // long long suffix_sum = 0;
    // long long ans = 0;
    // for (int i = n - 1; i > 0; i--) { 
    //   suffix_sum += arr[i]; 
    //   if (seen_prefix_sums.find(suffix_sum) != seen_prefix_sums.end()) {
    //     long long num_elements_prefix = prefix_sum_count[suffix_sum];
    //     long long num_elements_suffix = n - i;
    //     if (num_elements_prefix + num_elements_suffix <= n) {  
    //       ans = max(ans, num_elements_prefix+num_elements_suffix);
    //     }
    //   }
    // }
    // cout << ans << endl;
    int n;
    cin>>n;
    vi arr(n);
    FOR(i,n){
      cin>>arr[i];
    }
    int left=0;
    int right=n-1;
    int leftsum=arr[left];
    int rightsum=arr[right];
    int ans=0;
    while(left<right){
      if(leftsum==rightsum){
        ans=max(ans,left+1+n-right);
        left++;
        right--;
        leftsum+=arr[left];
        rightsum+=arr[right];
      }
      else if(leftsum<rightsum){
        left++;
        leftsum+=arr[left];
      }
      else{
        right--;
        rightsum+=arr[right];
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}