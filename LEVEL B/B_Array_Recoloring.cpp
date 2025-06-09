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
    vi arr(n);
    FOR(i,n){
      cin>>arr[i];
    }
    if(m!=1){
      sort(arr.rbegin(),arr.rend());
      long long sum=0;
      FOR(i,m+1){
        sum+=arr[i];
      }
      cout<<sum<<endl;
    }
    else{
      int maximum=0;
      FOR(i,n){
        maximum=max(maximum,arr[i]);
      }
      int count=0;
      FOR(i,n){
        if(arr[i]==maximum){
          count++;
        }
      }
      if(count==1){
        int index=-1;
        FOR(i,n){
          if(arr[i]==maximum){
            index=i;
            break;
          }
        }
        if(index==0 || index==n-1){
          int maximum2=0;
          FOR(i,n){
            if(arr[i]!=maximum){
              maximum2=max(maximum2,arr[i]);
            }
          }
          cout<<maximum2+maximum<<endl;
        }
        else{
          cout<<maximum+max(arr[0],arr[n-1])<<endl;
        }
      }
      else{
        if(count>2){
          if(arr[0]==maximum || arr[n-1]==maximum){
            cout<<2*maximum<<endl;
          }
          else{
            cout<<maximum+max(arr[0],arr[n-1])<<endl;
          }
        }
        else{
          if(arr[0]==maximum || arr[n-1]==maximum){
            cout<<2*maximum<<endl;
          }
          else{
            cout<<maximum+max(arr[0],arr[n-1])<<endl;
          }
        }
      }
    }
  }
  return 0;
}