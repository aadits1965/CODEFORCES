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
    set<int>s(all(arr));
    vi a;
    for(auto it:s){
      a.PB(it);
    }
    int i=0;
    int j=0;
    int ans=1;
    while(i<=j && i<a.size() && j<a.size()){
      int d=a[j]-a[i];
      if(d<=n-1){
        j++;
      }
      else{
        i++;
      }
      ans=max(ans,j-i+1);
    }
    cout<<ans-1<<endl;
  }
  return 0;
}