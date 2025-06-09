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
    int n,x;
    cin>>n>>x;
    vi arr(n);
    int count=0;
    FOR(i,n){
      cin>>arr[i];
      if(arr[i]){
        count++;
      }
    }
    if(count==0){
      cout<<"YES"<<endl;
    }
    else{
      int count1=0;
      bool flag=false;
      FOR(i,n){
        if(arr[i]==1 && count1==0){
          count1++;
          i+=x-1;
          continue;
        }
        if(arr[i]==1){
          flag=true;
        }
      }
      if(flag){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }
    }
  }
  return 0;
}