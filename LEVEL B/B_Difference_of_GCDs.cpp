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
    int n,l,r;
    cin>>n>>l>>r;
    vi res;
    bool flag=true;
    for(int i=1;i<=n;i++){
      int d=l%i;
      if(d==0){
        res.PB(l);
        continue;
      }
      int e=i-d;
      if(e+l>r){
        flag=false;
        break;
      }
      else{
        res.PB(e+l);
      }
    }
    if(!flag){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
      for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}