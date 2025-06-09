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
    int n,k;
    cin>>n>>k;
    int arr[n][n];
    FOR(i,n){
      FOR(j,n){
        cin>>arr[i][j];
      }
    }
    int brr[n][n];
    FOR(i,n){
      FOR(j,n){
        brr[i][j]=arr[n-i-1][n-j-1];
      }
    }
    int count=0;
    FOR(i,n){
      FOR(j,n){
        if(brr[i][j]==arr[i][j]){
          count++;
        }
      }
    }
    int diff=n*n-count;
    diff/=2;
    if(n==1){
      cout<<"YES"<<endl;
      continue;
    }
    if(k>=diff){
      if(n%2!=0){
        cout<<"YES"<<endl;
      }
      else if((k-diff)%2!=0){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}