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
int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vi arr(n);
    FOR(i,n){
      cin>>arr[i];
    }
    vi divisors;
    for(int i=1;i<=n/2;i++){
      if(n%i==0){
        divisors.PB(i);
      }
    }
    vector<long long>prefix_sum(n);
    prefix_sum[0] = arr[0];
    for (int i = 1; i < n; i++) {
      prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    }
    long long ans=0;
    FOR(i,divisors.size()){
      long long min_sum = LONG_LONG_MAX;
      long long max_sum = LONG_LONG_MIN;
      for (int j = 0; j < n - divisors[i] + 1; j+=divisors[i]) {
        long long segment_sum;
        if (j == 0) {
          segment_sum = prefix_sum[j + divisors[i] - 1];  
        } 
        else {
          segment_sum = prefix_sum[j + divisors[i] - 1] - prefix_sum[j - 1]; 
        }
        min_sum = min(min_sum, segment_sum);
        max_sum = max(max_sum, segment_sum);
      }
      ans=max(ans,max_sum-min_sum);
    }
    cout<<ans<<endl;
  }
  return 0;
}