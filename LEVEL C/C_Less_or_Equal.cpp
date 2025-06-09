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
  int n,k;
  cin>>n>>k;
  vi arr(n);
  FOR(i,n){
    cin>>arr[i];
  }
  sortall(arr);
  if(k==0){
    if(arr[0]>1){
      cout<<"1"<<endl;
    }
    else{
      cout<<"-1"<<endl;
    }
  }
  else{
    if(arr[k-1]==arr[k] && k!=n){
      cout<<"-1"<<endl;
    }
    else{
      cout<<arr[k-1]<<endl;
    }
  }
  return 0;
}