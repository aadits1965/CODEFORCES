#include <bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(a, c) for (int (a) = 0; (a) < (c); (a)++)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
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
    int n, m;
    cin >> n >> m;  
    vector<ll> arr(n), brr(m);
    FOR(i, n){
      cin >> arr[i];
    }
    FOR(i, m) {
      cin >> brr[i];
    }
    sortall(brr);  
    bool flag=true;
    arr[0]=min(brr[0]-arr[0],arr[0]);
    for(int i=1;i<n;i++){
      ll target = arr[i - 1] + arr[i];
      auto it = lower_bound(all(brr), target);
      if (it != brr.end()) {
        if(*it-arr[i]>=arr[i-1] && arr[i]>=arr[i-1]){
          arr[i]=min(*it-arr[i],arr[i]);
        }
        else if(arr[i]>=arr[i-1]){
          arr[i]=arr[i];
        }
        else if(*it-arr[i]>=arr[i-1]){
          arr[i]=*it-arr[i];
        }
      } 
      else {
        if(arr[i]<arr[i-1]){
          flag=false;
          break;
        }
      }
    }
    if(flag){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}
