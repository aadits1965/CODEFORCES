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
    vi ans;
    ans.PB(arr[0]);
    bool flag=true;
    for(int i=1;i<n-1;i++){
      ans.PB(arr[i]+ans[i-1]);
      if(ans[i]-arr[i+1]>=0 && arr[i+1]!=0){
        cout<<"-1"<<endl;
        flag=false;
        break;
      }
    }
    if(ans[0]-arr[1]>=0 && arr[1]!=0 && flag && n>=2){
      cout<<"-1"<<endl;
      continue;
    }
    if(flag){
      ans.PB(arr[n-1]+ans[n-2]);
      FOR(i,n){
        cout<<ans[i]<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}