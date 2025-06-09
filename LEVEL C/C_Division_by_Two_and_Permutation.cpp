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
    vi arr(n);
    FOR(i,n){
      cin>>arr[i];
    }
    vector<bool>done(n+1,false);
    sort(arr.rbegin(),arr.rend());
    bool flag=true;
    for(int i=0;i<n ;i++){
      int x=arr[i];
      while(x>0){
        if(x<=n){
          if(done[x]){
            x/=2;
          }
          else{
            done[x]=true;
            break;
          }
        }
        else{
          x/=2;
        }
      }
      if(x==0){
        flag=false;
        break;
      }
    }
    for(int i=1;i<=n;i++){
      if(!done[i]){
        flag=false;
        break;
      }
    }
    if(flag){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}