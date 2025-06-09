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
    cin >> n;
    int ans=0;
    if(n>11){
      if((n-23)%15==0){
        cout<<n/15-1+3<<endl;
        continue;
      }
      if((n-20)%15==0){
        cout<<n/15-1+2<<endl;
        continue;
      }
      if((n-12)%15==0){
        cout<<n/15+2<<endl;
        continue;
      }
    }
    while(n>0){
      if(n>=15){
        int m=n/15;
        int p=n%15;
        ans+=m;
        n=p;
      }
      else if(n>=10){
        int m=n/10;
        int p=n%10;
        ans+=m;
        n=p;
      }
      else if(n>=6){
        int m=n/6;
        int p=n%6;
        ans+=m;
        n=p;
      }
      else if(n>=3){
        int m=n/3;
        int p=n%3;
        ans+=m;
        n=p;
      }
      else{
        int m=n/1;
        int p=n%1;
        ans+=m;
        n=p;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}
