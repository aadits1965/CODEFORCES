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
    int ans=0;
    for(int i=0;i<n-k-1;i++){
      ans=max(ans,-arr[i]+arr[i+k+1]);
    }
    cout<<max(arr[k+1]-arr[k],ans+1)<<endl;
  }
  return 0;
}