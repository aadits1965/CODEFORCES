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
    if(n%2==0){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
      int i=1;
      ll sum=(2*n+1);
      sum-=n/2;
      for(int j=1;j<=n/2+1;j++){
        cout<<i<<" "<<sum-i<<endl;
        i+=2;
        sum++;
      }
      i=2;
      for(int j=1;j<=n/2;j++){
        cout<<i<<" "<<sum-i<<endl;
        i+=2;
        sum++;
      }
    }
  }
  return 0;
}