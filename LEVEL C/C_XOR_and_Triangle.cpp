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
    int ans=1;
    bool flag=false;
    while(ans<n){
      long long d=(ans+1)^n;
      if(ans+1+d>n && ans+1+n>d && n+d>ans+1){
        flag=true;
        break;
      }
      else{
        ans=ans*2;
      }
    }
    if(flag){
      cout<<ans+1<<endl;
    }
    else{
      cout<<"-1"<<endl;
    }
  }
  return 0;
}