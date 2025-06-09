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
    int n,m;
    cin>>n>>m;
    if(m==0 && n==1){
      cout<<"-1"<<endl;
      continue;
    }
    if(m==1){
      if(n%2!=0){
        cout<<n<<endl;
      }
      else{
        cout<<n+3<<endl;
      }
      continue;
    }
    if(m==0){
      if(n%2==0){
        cout<<n<<endl;
      }
      else{
        cout<<n+3<<endl;
      }
      continue;
    }
    int p=__builtin_popcount(m);
    if(n>p){
      if((n-p)%2==0){
        cout<<m+max(0,n-p)<<endl;
      }
      else{
        cout<<m+max(0,n-p+1)<<endl;
      }
    }
    else{
      if((p-n)%2==0){
        cout<<m+max(0,n-p)<<endl;
      }
      else{
        cout<<m+max(0,n-p+1)<<endl;
      }
    }
  }
  return 0;
}