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
    int arr[n][2];
    long long sum1=0,sum2=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<2;j++){
        cin>>arr[i][j];
      }
    }
    for(int i=0;i<n;i++){
      sum1+=arr[i][0];
    }
    for(int i=0;i<n;i++){
      sum1+=arr[i][1];
    }
    sum1+=m;
    sum2+=m;
    cout<<2*(sum1+sum2-arr[0][0]-arr[0][1])<<endl;
  }
  return 0;
}