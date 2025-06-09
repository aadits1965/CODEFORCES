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
    long long n,k;
    cin>>n>>k;
    vi arr(n);
    FOR(i,n){
      cin>>arr[i];
    }
    if(k==0){
      cout<<"1"<<endl;
    }
    else{
      int ans=INT_MAX;
      FOR(i,n){
        int maximum=0;
        for(int j=i+1;j<min(n,(ll)(i+65));j++){
          for(int l=i;l<j;l++){
            maximum=max(maximum,arr[j]^arr[l]);
          }
          if(maximum>=k){
            ans=min(ans,j-i+1);
            break;
          }
        }
      }
      if(ans==INT_MAX){
        cout<<"-1"<<endl;
      }
      else{
        cout<<ans<<endl;
      }
    }
  }
  return 0;
}