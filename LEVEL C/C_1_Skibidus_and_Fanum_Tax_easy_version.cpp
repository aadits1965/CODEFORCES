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
    vector<ll> arr(n), brr(m), crr(n), drr(n);
    FOR(i, n){
      cin >> arr[i];
    }
    FOR(i, m) {
      cin >> brr[i];
    }
    FOR(i, n){
      crr[i]=brr[0]-arr[i];
    }
    bool flag=true;
    drr[0]=(min(arr[0],crr[0]));
    for(int i=1;i<n;i++){
      if(max(arr[i],crr[i])<drr[i-1]){
        flag=false;
        break;
      }
      else{
        if(arr[i]>=drr[i-1] && crr[i]>=drr[i-1]){
          drr[i]=min(arr[i],crr[i]);
        }
        else if(arr[i]>=drr[i-1]){
          drr[i]=arr[i];
        }
        else if(crr[i]>=drr[i-1]){
          drr[i]=crr[i];
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
