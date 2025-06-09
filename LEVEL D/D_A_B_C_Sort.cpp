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
    vi a=arr;
    sortall(a);
    if(n<=2){
      cout<<"YES"<<endl;
      continue;
    }
    bool flag=false;
    if(n%2==0){
      for(int i=0;i<n;i+=2){
        if(!((arr[i]==a[i] && arr[i+1]==a[i+1]) || (arr[i]==a[i+1] && arr[i+1]==a[i]))){
          flag=true;
          break;
        }
      }
    }
    else{
      if(arr[0]!=a[0]){
        cout<<"NO"<<endl;
        continue;
      }
      for(int i=1;i<n;i+=2){
        if(!((arr[i]==a[i] && arr[i+1]==a[i+1]) || (arr[i]==a[i+1] && arr[i+1]==a[i]))){
          flag=true;
          break;
        }
      }
    }
    if(!flag){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}