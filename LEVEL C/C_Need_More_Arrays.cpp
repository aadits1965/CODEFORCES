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
    if(n==1){
      cout<<1<<endl;
      continue;
    }
    unordered_set<int>s(all(arr));
    if(s.size()==1){
      cout<<1<<endl;
      continue;
    }
    vi a;
    a.PB(arr[0]);
    int d=arr[0];
    for(int i=1;i<n;i++){
      if(arr[i]-d>1){
        a.PB(arr[i]);
        d=arr[i];
      }
      else{
        continue;
      }
    }
    cout<<a.size()<<endl;
  }
  return 0;
}