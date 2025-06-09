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
    int n,k;
    cin>>n>>k;
    vi arr(n);
    FOR(i,n){
      cin>>arr[i];
    }
    sortall(arr);
    map<int, int> freq_map;
    for (int num : arr) {
      freq_map[num]++;
    }
    int count = 0;
    for (int i = 1; i <= k / 2; ++i) {
      int complement = k - i; 
      if (freq_map.find(i) != freq_map.end() && freq_map.find(complement) != freq_map.end()) {
        if (i == complement) {
          count += freq_map[i] / 2;
        } 
        else {
          count += min(freq_map[i], freq_map[complement]);
        }
      }
    }
    cout << count << endl;
  }
  return 0;
}