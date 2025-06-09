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
    vi arr(n);
    FOR(i,n){
      cin>>arr[i];
    }
    vi brr;
    FOR(i,r){
      brr.PB(arr[i]);
    }
    vi crr;
    for(int i=l-1;i<n;i++){
      crr.PB(arr[i]);
    }
    int d=r-l+1;
    sortall(brr);
    sortall(crr);
    long long sum1=0;
    FOR(i,d){
      sum1+=brr[i];
    }
    long long sum2=0;
    FOR(i,d){
      sum2+=crr[i];
    }
    cout<<min(sum1,sum2)<<endl;
  }
  return 0;
}