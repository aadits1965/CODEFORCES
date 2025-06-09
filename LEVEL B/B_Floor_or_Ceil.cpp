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
    int x,n,m;
    cin>>x>>n>>m;
    int a=ceil(1.0*log2(x));
    int ans1=0,ans2=0;
    int b=0;
    int c=x;
    while(c%2==0){
      b++;
      c=c/2;
    }
    if(n+m>=a){
      ans1=0;
    }
    else{
      if(n+m<=b){
        ans1=x/pow(2,n+m);
      }
      else{
        if(m>=b){
          m=m-b;
          while(n--){
            x=x/2;
          }
          ans1=x;
        }
        else{

        }
      }
    }
    if(m+n>=a){
      ans2=0;
    }
    else{
      if(m+n<=b){
        ans2=x/pow(2,m+n);
      }
      else{
        if(n>=a){
          n=n-a;
        }
        else{

        }
      }
    }
    cout<<ans1<<" "<<ans2<<endl;

  }
  return 0;
}