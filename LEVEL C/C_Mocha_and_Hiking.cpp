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
    vi arr(n);
    int count=0;
    FOR(i,n){
      cin>>arr[i];
      if(arr[i]==1){
        count++;
      }
    }
    if(arr[n-1]==0){
      FOR(i,n+1){
        cout<<i+1<<" ";
      }
      cout<<endl;
    }
    else if(arr[0]==1){
      cout<<n+1<<" ";
      FOR(i,n){
        cout<<i+1<<" ";
      }
      cout<<endl;
    }
    else{
      if(count==n){
        cout<<"-1"<<endl;
      }
      else{
        int j=-1;
        FOR(i,n-1){
          if(arr[i]==0 && arr[i+1]==1){
            j=i;
            break;
          }
        }
        if(j==-1){
          cout<<"-1"<<endl;
        }
        else{
          FOR(i,j+1){
            cout<<i+1<<" ";
          }
          cout<<n+1<<" ";
          for(int k=j+1;k<n;k++){
            cout<<k+1<<" ";
          }
        }
      }
    }
  }
  return 0;
}