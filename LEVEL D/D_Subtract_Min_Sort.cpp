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
    FOR(i,n){
      cin>>arr[i];
    }
    if(arr[0]>arr[1]){
      cout<<"NO"<<endl;
      continue;
    }
    bool flag=true;
    for(int i=0;i<n-1;i++){
      if(arr[i]>arr[i+1]){
        cout<<"NO"<<endl;
        flag=false;
        break;
      }
      else{
        int c=arr[i];
        int d=arr[i+1];
        arr[i]-=min(c,d);
        arr[i+1]-=min(c,d);
      }
    }
    if(flag){
      cout<<"YES"<<endl;
    }
  }
  return 0;
}