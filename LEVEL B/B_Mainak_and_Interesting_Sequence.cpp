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
    if(n>m){
      cout<<"NO"<<endl;
      continue;
    }
    if(m%n==0){
      cout<<"YES"<<endl;
      FOR(i,n){
        cout<<m/n<<" ";
      }
      cout<<endl;
      continue;
    }
    if(n%2!=0){
      cout<<"YES"<<endl;
      FOR(i,n-1){
        cout<<"1 ";
      }
      cout<<m-n+1<<endl;
      continue;
    }
    if(m%2==0){
      cout<<"YES"<<endl;
      FOR(i,n-2){
        cout<<"1 ";
      }
      cout<<(m-n+2)/2<<" "<<(m-n+2)/2<<endl;
      continue;
    }
    cout<<"NO"<<endl;
  }
  return 0;
}