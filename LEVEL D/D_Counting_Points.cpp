#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
typedef vector<long long> vi;
typedef pair<long long, long long> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))

int main() {
  fastIO;
  int t;
  cin >> t;
  while (t--) {
    long long n,m;
    cin>>n>>m;
    vi arr(n),brr(n);
    FOR(i,n){
      cin>>arr[i];
    }
    FOR(i,n){
      cin>>brr[i];  
    }  
    unordered_map<long long,vector<pi>>height;
    FOR(i,n){
      FOR(j,2*brr[i]+1){
        if(2*brr[i]<j){
          continue;
        }
        height[arr[i]-brr[i]+j].PB(MP(-(long long)floor(sqrtl(j*(2*brr[i]-j))),(long long)floor(sqrtl(j*(2*brr[i]-j)))));
      }
    }  
    ll ans=0;
    for(auto &i : height) {
      vector<pi> &intervals = i.S;
      sortall(intervals);
      long long bottom=intervals[0].F;
      long long top=intervals[0].S;
      ll count=0;
      for(size_t j=1;j<intervals.size();j++){
        if (intervals[j].F<=top+1){
          top=max(top,intervals[j].S);
        }
        else{
          count+=(ll)(top-bottom+1);
          bottom=intervals[j].F;
          top=intervals[j].S;
        }
      }
      count+=(ll)(top-bottom+1);
      ans+=count;
    }
    cout<<ans<<endl;
  }
  return 0;
}