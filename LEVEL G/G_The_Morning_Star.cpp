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
    vector<vector<long long>>arr(n,vector<long long>(2));
    for(int i=0;i<n;i++){
      cin>>arr[i][0]>>arr[i][1];
    }
    map<long long, long long> freq_y;
    for (int i = 0; i < n; i++) {
      freq_y[arr[i][1]]++;  
    }
    map<long long, long long> freq_x;
    for (int i = 0; i < n; i++) {
      freq_x[arr[i][0]]++;  
    }
    map<long long, long long> freq_xpy;
    for (int i = 0; i < n; i++) {
      freq_xpy[arr[i][0]+arr[i][1]]++;  
    }
    map<long long, long long> freq_xmy;
    for (int i = 0; i < n; i++) {
      freq_xmy[arr[i][0]-arr[i][1]]++;  
    }
    long long ans=0;
    for (auto it : freq_y) {
      ans += (it.second*(it.second-1));
    }
    for (auto it : freq_x) {
      ans += (it.second*(it.second-1));
    }
    for (auto it : freq_xpy) {
      ans += (it.second*(it.second-1));
    }
    for (auto it : freq_xmy) {
      ans += (it.second*(it.second-1));
    }
    cout<<ans<<endl;
  }
  return 0;
}