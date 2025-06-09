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
    vector<pi> a(n),b(n),c(n);
    FOR(i,n){
      cin>>a[i].F;
      a[i].S=i+1;
    }
    FOR(i,n){
      cin>>b[i].F;
      b[i].S=i+1;
    }
    FOR(i,n){
      cin>>c[i].F;
      c[i].S=i+1;
    }
    vector<pi> d=a,e=b,f=c;
    sortall(d);
    sortall(e);
    sortall(f);
    vector<pi> g={d[n-1],d[n-2],d[n-3]};
    vector<pi> h={e[n-1],e[n-2],e[n-3]};
    vector<pi> i={f[n-1],f[n-2],f[n-3]};
    int maxSum = -1;
    for(int j=0;j<3;j++){
      for(int k=0;k<3;k++){
        for(int l=0;l<3;l++){
          if(!(g[j].S==h[k].S || g[j].S==i[l].S || h[k].S==i[l].S)){
            maxSum=max(maxSum,g[j].F+h[k].F+i[l].F);
          }
        }
      }
    }
    cout<<maxSum<<endl;
  }
  return 0;
}