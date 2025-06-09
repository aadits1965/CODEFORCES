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
    vector<vector<int>> arr1;
    arr1.push_back(arr);
    bool stable = false;
    for (int j = 1; j <= n; ++j) {
      unordered_map<int, int> freq;
      for (int val : arr){
        freq[val]++;
      }
      vector<int> newArr(n);
      for (int i = 0; i < n; ++i){
        newArr[i] = freq[arr[i]];
      }
      arr1.push_back(newArr);
      if (newArr == arr) break;
        arr = newArr;
      }
      int q;
      cin >> q;
      while (q--) {
        int x, m;
        cin >> x >> m;
        x--;
        m = min(m, (int)arr1.size() - 1);
        cout << arr1[m][x] << '\n';
      }
    }
  return 0;
}