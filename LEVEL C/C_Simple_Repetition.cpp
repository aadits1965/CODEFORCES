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

bool fn(long long n){
  if(n<2){
    return false;
  }
  for(long long i=2;i*i<=n;i++){
    if(n%i==0){
      return false;
    }
  }
  return true;
}
int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    long long a,b;
    cin>>a>>b;
    if(b==1){
      if(fn(a)){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    else{
      if(a==1 && b==2){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
  }
  return 0;
}
