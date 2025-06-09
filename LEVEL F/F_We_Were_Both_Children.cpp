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
    set<int> uniqueElements;
    unordered_map<int, int> freq;
    FOR(i,n){
      cin>>arr[i];
      if(arr[i]<=n){
        uniqueElements.insert(arr[i]); 
        freq[arr[i]]++;
      }
    }
    vector<int> hash(n + 1, 0);
    vi uniqueArr(uniqueElements.begin(), uniqueElements.end());
    for (int num : uniqueArr) {
      for (int j = num; j <= n; j += num) {
        hash[j] += freq[num];
      }
    }
    cout << *max_element(hash.begin() + 1, hash.end()) << endl;
  }
  return 0;
}