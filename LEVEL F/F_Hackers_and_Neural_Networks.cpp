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
    int n, m; 
    cin >> n >> m;
    vector<string> arr(n);
    FOR(i,n){
      cin >> arr[i];
    } 
    vector<bool> checker(n, false);
    int var = 0;
    FOR(i,m){
      int count = 0;
      vector<string> brr(n);
      FOR(j,n){
        cin >> brr[j];
        if(brr[j] == arr[j]) {
          count++;
          checker[j] = true;
        }
      }
      var = max(var, count);
    }
    bool flag=true;
    FOR(j,n){
      if(!checker[j]) {
        cout << -1 << endl;
        flag=false;
        break;
      }
    }
    if(flag){
      cout << 3 * n - 2 * var << endl;
    }
  }
  return 0;
}
