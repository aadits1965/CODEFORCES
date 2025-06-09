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
    ll n,m,k;
    cin>>n>>m>>k;
    if(m<n-1 || m>n*(n-1)/2){
      cout<<"NO"<<endl;
      continue;
    }
    if(n==1){
      if(k>1){
        cout<<"yes"<<endl;
      }
      else{
        cout<<"no"<<endl;
      }
      continue;
    }
    if(m==n*(n-1)/2){
      if(k>2){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
      continue;
    }
    
    if(k>3){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}