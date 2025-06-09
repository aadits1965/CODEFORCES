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
  double n,l;
  cin>>n>>l;
  vector<double> arr(n);
  FOR(i,n){
    cin>>arr[i];
  }
  sortall(arr);
  double dist=0;
  for(int i=0;i<n-1;i++){
    dist=max(dist,arr[i+1]-arr[i]);
  }
  dist/=2;
  if(arr[0]!=0){
    dist=max(dist,arr[0]);
  }
  if(arr[n-1]!=l){
    dist=max(dist,l-arr[n-1]);
  }
  cout<<fixed<<setprecision(10)<<dist<<endl;
  return 0;
}