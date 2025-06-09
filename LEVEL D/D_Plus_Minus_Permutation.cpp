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
    ll n,x,y;
    cin>>n>>x>>y;
    ll a=n/x;//1
    ll b=n/y;//2
    ll d=x*y/__gcd(x,y);
    ll c=n/d;//0
    if(x==y){
      cout<<"0"<<endl;
      continue;
    }
    if(a>b){
      if(c==b){
        cout<<n*(n+1)/2-(n-(a-c))*(n-(a-c)+1)/2<<endl;
        continue;
      }
      else if(c<b){
        cout<<n*(n+1)/2-(n-(a-c))*(n-(a-c)+1)/2-(b-c)*(b-c+1)/2<<endl;
        continue;
      }
    }
    else if(a==b){
      cout<<n*(n+1)/2-(n-a)*(n-a+1)/2-b*(b+1)/2<<endl;
      continue;
    }
    else{
      if(c==a){
        cout<<-(b-c)*((b-c)+1)/2<<endl;
        continue;
      }
      else if(c<a){
        cout<<n*(n+1)/2-(n-(a-c))*(n-(a-c)+1)/2-(b-c)*(b-c+1)/2<<endl;
        continue;
      }

    }
  }
  return 0;
}