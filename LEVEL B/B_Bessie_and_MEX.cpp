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
    vi res(n);
    res.PB(n-arr[n-1]);
    int k=n-arr[n-1];
    for(int i=n-2;i>=0;i--){
      res.PB(k-arr[i]);
      int d=k;
      k=min(d,k-arr[i]);
    }
    reverse(all(res));
    for(int i=0;i<n;i++){
      cout<<res[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}