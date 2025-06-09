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
    vi arr(2*n);  
    FOR(i,2*n){
      cin>>arr[i];
    }
    sort(arr.rbegin(),arr.rend());
    long long oddsum=0;
    long long evensum=0;
    FOR(i,2*n){
      if(i<=n){
        oddsum+=arr[i];
      }
      else{
        evensum+=arr[i];
      }
    }
    cout<<arr[0]<<" "<<oddsum-evensum<<" ";
    for(int i=1;i<n;i++){
      cout<<arr[i]<<" "<<arr[i+n]<<" ";
    }
    cout<<arr[n]<<endl;
  }
  return 0;
}