#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
typedef long long int ll;
typedef vector<long long> vi;
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
    ll n,m;
    cin>>n>>m;
    vi arr(m);
    FOR(i,m){
      cin>>arr[i];
    }
    if(n==1 || m==1){
      cout<<"YES"<<endl;
      continue;
    }
    vi a;
    FOR(i,m-1){
      a.PB(arr[i+1]-arr[i]);
    }
    vi b=a;
    sortall(b);
    if(a!=b){
      cout<<"NO"<<endl;
      continue;
    }
    ll d=a[0];
    if(n==m){
      if(arr[0]>d){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }
    }
    else{
      if((n-m+1)*d>=arr[0]){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
  }
  return 0;
}