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
    unordered_set<int>s;
    vector<pi> v;
    for(int i=n-1;i>=0;i--){
      if (s.find(arr[i]) == s.end()) {
        v.PB(MP(arr[i], i+1));
        s.insert(arr[i]);
      } 
    }
    int ans=0;
    for(int i=0;i<v.size();i++){
      for(int j=i;j<v.size();j++){
        if(__gcd(v[i].F,v[j].F)==1){
          ans=max(ans,v[i].S+v[j].S);
        }
      }
    }
    if(ans==0){
      cout<<"-1"<<endl;
      continue;
    }
    cout<<ans<<endl;
  }
  return 0;
}