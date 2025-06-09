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
    int x,n;
    cin >> x >> n;
    int ans = 1;
    for(int i=1;i*i<=x;i++){
      if(x%i==0){
        if(n<=x/i){
          ans=max(ans,i);
        }       
        if(n<=i){
          ans=max(ans,x/i);
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}