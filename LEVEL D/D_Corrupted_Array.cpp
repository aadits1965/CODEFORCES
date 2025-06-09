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
    vi arr(n+2);
    ll sum=0;
    FOR(i,n+2){
      cin>>arr[i];
      sum+=arr[i];
    }
    sortall(arr);
    ll maximum=arr[n+1];
    ll maximum2=arr[n];
    ll a=sum-arr[n+1];
    bool flag=false;
    ll b=0;
    FOR(i,n+1){
      if(a-arr[i]==arr[n+1]){
        flag=true;
        b=arr[i];
        break;
      }
    }
    ll d=0;
    if(!flag){
      ll c=sum-arr[n]-arr[n+1];
      if(c==arr[n]){
        flag=true;
      }
    }
    if(!flag){
      cout<<"-1"<<endl;
    }
    else{
      if(b!=0){
        ll count=0;
        FOR(i,n+1){
          if(arr[i]==b && count==0){
            count++;
            continue;
          }
          cout<<arr[i]<<" ";
        }
        cout<<endl;
      }
      else{
        ll count=0;
        FOR(i,n){
          cout<<arr[i]<<" ";
        }
        cout<<endl;
      }
    }

  }
  return 0;
}