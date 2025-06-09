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
    int l,r;
    cin>>l>>r;
    if(l!=r && r>=4){
      if(r%2!=0){
        cout<<(r-1)/2<<" "<<(r-1)/2<<endl;
      }
      else{
        cout<<r/2<<" "<<r/2<<endl;
      }
    }
    else{
      if(r<=3){
        cout<<"-1"<<endl;
      }
      else{
        if(fn(l)){
          cout<<"-1"<<endl;
        }
        else{
          int p=0;
          for(int k=2;k<=sqrt(r);k++){
            if(r%k==0){
              p=k;
              break;
            }
          }
          cout<<r/p<<" "<<r-r/p<<endl;
        }
      }
    }
  }
  return 0;
}