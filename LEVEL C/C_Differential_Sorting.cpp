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
    vi a=arr;
    sortall(a);
    if(a==arr){
      cout<<"0"<<endl;
      continue;
    }
     if (arr[n - 2] > arr[n - 1]) {
      cout << -1 << endl;
    } 
    else {
      if (arr[n - 1] < 0) {
        cout << -1 << endl;
      } 
      else {
        cout << n - 2 << endl;
        for (int i = 1; i <= n - 2; ++i) {
          cout << i << ' ' << n - 1 << ' ' << n << endl;
        }
      }
    }
  }
  return 0;
}