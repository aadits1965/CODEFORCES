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
    int n,s;
    cin>>n>>s;
    vi arr(n);
    long long sum=0;
    FOR(i,n){
      cin>>arr[i];
      sum+=arr[i];
    }
    if(sum<s){
      cout<<"-1"<<endl;
    }
    else{
      int left = 0, right = 0;
      long long sum = arr[0];
      int maxLen = 0;
      while (right < n) {
        while (left <= right && sum > s) {
          sum -= arr[left];
          left++;
        }
        if (sum == s) {
          maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < n) sum += arr[right];
      }
      cout<<n-maxLen<<endl;
    }
  }
  return 0;
}