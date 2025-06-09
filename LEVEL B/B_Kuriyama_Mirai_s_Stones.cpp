#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
typedef long long int ll;
typedef vector<ll> vi;
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
  int n;
  cin>>n;
  vi arr(n);
  FOR(i,n){
    cin>>arr[i];
  }
  vi arr2=arr;
  sortall(arr2);
  vi arr3,arr4;
  long long sum1=0,sum2=0;
  FOR(i,n){
    sum1+=arr[i];
    sum2+=arr2[i];
    arr3.PB(sum1);
    arr4.PB(sum2);
  }
  int q;
  cin>>q;
  while(q--){
    int t,l,r;
    cin>>t>>l>>r;
    if(t==1){
      if(l==1){
        cout<<arr3[r-1]<<endl;
      }
      else{
        cout<<arr3[r-1]-arr3[l-2]<<endl;
      }
    }
    else{
      if(l==1){
        cout<<arr4[r-1]<<endl;
      }
      else{
        cout<<arr4[r-1]-arr4[l-2]<<endl;
      }
    }
  }
  return 0;
}