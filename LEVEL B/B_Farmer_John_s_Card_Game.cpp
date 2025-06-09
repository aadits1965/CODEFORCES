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
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    FOR(i,n){
      FOR(j,m){
        cin>>arr[i][j];
      }
    }
    bool flag=true;
    FOR(i,n){
      FOR(j,m-1){
        if(abs(arr[i][j]-arr[i][j+1])%n!=0){
          flag=false;
          break;
        }
      }
    }
    if(!flag){
      cout<<"-1"<<endl;
      continue;
    }
    vector<pair<int, int>> cow_order(n);
    for (int i = 0; i < n; ++i) {
      int min_card = *min_element(arr[i], arr[i] + m);
      cow_order[i] = { min_card, i };
    }
    sort(cow_order.begin(), cow_order.end());
    for (int i = 0; i < n; ++i) {
      cout << cow_order[i].second + 1 << " "; 
    }
    cout << endl;
  }
  return 0;
}