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
    ll n;
    cin>>n;
    vi arr(n);
    FOR(i,n){
      cin>>arr[i];
    }
    if(n==1){
      cout<<"0"<<endl;
      continue;
    }
    if(n==2){
      if((arr[0]+arr[1])%2==0){
        cout<<"0"<<endl;
      }
      else{
        cout<<"1"<<endl;
      }
      continue;
    }
    sortall(arr);
    ll x=arr[0];
    ll y=arr[n-1];
    if((x+y)%2==0){
      cout<<"0"<<endl;
    }
    else{
      ll count1=0;
      ll count2=0;
      for(int i=1;i<n;i++){
        if(arr[i]%2!=arr[0]%2){
          break;
        }
        else{
          count1++;
        }
      }
      for(int i=n-2;i>=0;i--){
        if(arr[i]%2!=arr[n-1]%2){
          break;
        }
        else{
          count2++;
        }
      }
      cout<<min(count1,count2)+1<<endl;
    }
  }
  return 0;
}