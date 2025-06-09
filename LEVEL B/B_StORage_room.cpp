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
    int MAX_VAL = (1 << 30) - 1;
    vi arr2(n, MAX_VAL);
    vector<vi> arr(n, vi(n));
    FOR(i,n){
      FOR(j,n){
        cin>>arr[i][j];
      }
    }
    FOR(i,n){
      FOR(j,n){
        if(i!=j){
          arr2[i]&=arr[i][j];
          arr2[j]&=arr[i][j];
        }
      }
    }
    bool flag=true;
    FOR(i,n){
      FOR(j,n){
        if(i!=j){
          if((arr2[i] | arr2[j]) != arr[i][j]){
            flag=false;
            break;
          }
        }
      }
      if (!flag) break;
    }
    if(!flag){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
      FOR(i,n){
        cout<<arr2[i]<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}