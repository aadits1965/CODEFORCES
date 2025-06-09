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
  double n,m,a,b;
  cin>>n>>m>>a>>b;
  double d=b/m;
  if(d>=a){
    cout<<int(n*a)<<endl;
  }
  else{
    int e=n/m;
    int cost=e*b;
    int rem=int(n)%int(m);
    if(rem*a>b){
      cost+=b;
    }
    else{
      cost+=rem*a;
    }
    cout<<cost<<endl;
  }
  return 0;
}