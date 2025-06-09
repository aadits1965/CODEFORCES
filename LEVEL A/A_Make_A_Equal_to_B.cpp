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
    vi a(n),b(n);
    FOR(i,n){
      cin>>a[i];
    }
    FOR(i,n){
      cin>>b[i];
    }
    int count1=0;
    int count2=0;
    FOR(i,n){
      if(a[i]==1){
        count1++;
      }
      if(b[i]==1){
        count2++;
      }
    }
    int ans=0;
    for(int i=0;i<n;i++){
      ans+=(a[i]^b[i]);
    }
    ans=min(ans,1+abs(count1-count2));
    cout<<ans<<"\n";
  }
  return 0;
}