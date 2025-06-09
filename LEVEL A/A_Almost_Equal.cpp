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
  int n;
  cin>>n;
  if(n%2==0){
    cout<<"NO"<<endl;
  }
  else{
    cout<<"YES"<<endl;
    vi arr(2*n);
    for(int i=0;i<n;i+=2){
      arr[i]=i+1;
    }
    for(int i=1;i<n;i+=2){
      arr[i]=2*n-i+1;
    }
    for(int i=n;i<2*n;i+=2){
      arr[i]=arr[i-n]+1;
    }
    for(int i=n+1;i<2*n;i+=2){
      arr[i]=arr[i-n]-1;
    }
    FOR(i,2*n){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}