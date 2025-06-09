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
    ll n;
    cin>>n;
    ll i=2;
    bool ans=false;
    while(i<=1000){
      bool flag=true;
      ll d=1+i+i*i;
      ll k=3;
      while(flag){
        if(d<n){
          d+=pow(i,k);
        }
        else if(d==n){
          ans=true;
          break;
        }
        else{
          flag=false;
          break;
        }
        k++;
      }
      i++;
    }
    if(ans){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}