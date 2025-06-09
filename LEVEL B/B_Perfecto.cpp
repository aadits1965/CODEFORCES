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

bool perfectsquare(ll x) {
  ll s = sqrt(x);
  return s * s == x;
}

int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    long long sum=3;
    if(n==1){
      cout<<"-1"<<endl;
    }
    else if(n==2){
      cout<<"2 1"<<endl;
    }
    else{
      bool flag=true;
      for(int i=3;i<=n;i++){
        sum+=i;
        if(perfectsquare(sum) && i==n){
          cout<<"-1"<<endl;
          flag=false;
          break;
        }
      }
      if(flag){
        sum=3;
        cout<<"2 1 ";
        for(int i=3;i<=n;i++){
          sum+=i;
          if(perfectsquare(sum)){
            cout<<i+1<<" "<<i<<" ";
            sum+=i+1;
            i++;
          }
          else{
            cout<<i<<" ";
          }
        }
        cout<<endl;
      }
    }
  }
  return 0;
}