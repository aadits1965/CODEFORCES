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

int main() {
  fastIO;
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin>>n;
    vi arr(n);
    FOR(i,n){
      cin>>arr[i];
    }
    vector<long long>arr1(n+1,0);
    vector<long long>arr2(n+1,0);
    FOR(i,n){
      if(arr[i]>0){
        arr1[i+1]=arr1[i]+arr[i];
      }
      else{
        arr1[i+1]=arr1[i];
      }
    }
    for (int i=n-1;i>=0;i--){
      if(arr[i]<0){
        arr2[i]=arr2[i+1]+abs(arr[i]);
      }
      else{
        arr2[i]=arr2[i+1];
      }
    }
    ll ans=0;
    FOR(i,n+1){
      ans = max(ans,arr1[i]+arr2[i]);
    }
    cout<<ans<<endl;
  }
  return 0;
}
