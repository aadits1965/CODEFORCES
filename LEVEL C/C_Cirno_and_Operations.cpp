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
    vector<int>arr(n);
    int count=0;
    long long sum=0;
    FOR(i,n){
      cin>>arr[i];
    }
    if(n==1){
      cout<<arr[0]<<endl;
      continue;
    }
    long long ans=0;
    long long max_sum=LONG_LONG_MIN;
    long long current_sum = accumulate(arr.begin(), arr.end(), 0LL);  
    max_sum = max(max_sum, current_sum);
    while (n > 1) {
      vector<int> diff_sequence(n - 1);
      long long diff_sum=0; 
      FOR(i,n-1){
        diff_sequence[i] = arr[i + 1] - arr[i];
        diff_sum+=diff_sequence[i];
      }
      max_sum = max(max_sum, diff_sum);
      arr = diff_sequence;
      n--;
      ans=abs(diff_sequence[0]);
    }
    cout<<max(max_sum,ans)<<endl;
  }
  return 0;
}  