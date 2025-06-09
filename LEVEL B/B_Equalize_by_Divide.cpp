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
    int mini=INT_MAX;
    FOR(i,n){
      cin>>arr[i];
      if(arr[i]<mini){
        mini=arr[i];
      }
    }
    unordered_set<int>s(all(arr));
    if(s.size()==1){
      cout<<"0"<<endl;
      continue;
    }
    if(mini==1){
      cout<<"-1"<<endl;
    }
    else{
      vector<pi> ops;
      int max_ops = n * 30;  
      while (max_ops--) {
        unordered_set<int> current(all(arr));
        if (current.size() == 1) break;
        int min_val = INT_MAX, max_val = INT_MIN;
        int j = -1, k = -1;
        FOR(i, n) {
          if (arr[i] < min_val) {
            min_val = arr[i];
            j = i;
          }
          if (arr[i] > max_val) {
            max_val = arr[i];
            k = i;
          }
        }            
        if (arr[j] == 1 || arr[k] == arr[j]) break;
        ops.PB({k + 1, j + 1});
        arr[k] = (arr[k] + arr[j] - 1) / arr[j];  
      }
      unordered_set<int> final_check(all(arr));
      if (final_check.size() != 1) {
        cout << "-1\n";
      } 
      else {
        cout << ops.size() << "\n";
        for (auto it : ops) {
          cout << it.F << " " << it.S << "\n";
        }
      }
    }
  }
  return 0;
}