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
    long long n,p,l,a;
    cin>>n>>p>>l>>a;
    long long maxa=ceil(1.0*n/7);
    int right=n;
    int left=0;
    int ans=0;
    while(left<=right){
      int mid=(left+right)/2;
      ll val=(mid*l)+(min(maxa,ll(2*mid)))*a;
      if(val>=p){
        ans=mid;
        right=mid-1;
      }
      else{
        left=mid+1;
      }
    }
    cout<<n-ans<<endl;
  }
  return 0;
}