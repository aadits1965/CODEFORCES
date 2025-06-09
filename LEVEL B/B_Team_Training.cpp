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
    vi arr(n);
    FOR(i,n){
      cin>>arr[i];
    }
    sort(arr.rbegin(),arr.rend());
    int count=0;
    int minimum=arr[0];
    int j=0;
    for(int i=0;i<n-1;i++){
      if((i-j+1)*minimum>=m){
        count++;
        j=i+1;
      }
      minimum=arr[i+1];
    }
    if((n-1-j+1)*minimum>=m){
      count++;
    }
    cout<<count<<endl;
  }
  return 0;
}