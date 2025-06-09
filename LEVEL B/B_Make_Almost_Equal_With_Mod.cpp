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
    int count=0;
    vector<long long> arr(n);
    FOR(i,n){
      cin>>arr[i];
      if(arr[i]%2){
        count++;
      }
    }
    if(count==0){
      ll j=2;
      bool flag=true;
      while(flag){
        vector<long long> a;
        FOR(i,n){
          a.PB(arr[i]%j);
        }
        set<ll>s(all(a));
        if(s.size()!=2){
          j*=2;
        }
        else{
          flag=false;
        }
      }
      cout<<j<<endl;
    }
    else if(count==n){
      ll j=2;
      bool flag=true;
      while(flag){
        vector<long long> a;
        FOR(i,n){
          a.PB(arr[i]%j);
        }
        set<ll>s(all(a));
        if(s.size()!=2){
          j*=2;
        }
        else{
          flag=false;
        }
      }
      cout<<j<<endl;
    }
    else{
      cout<<"2"<<endl;
    }
  }
  return 0;
}