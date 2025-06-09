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
    sortall(arr);
    long long sum=0;
    if(n==1 && arr[0]==1){
      cout<<"YES"<<endl;
    }
    else if(n==1 && arr[0]!=1){
      cout<<"NO"<<endl;
    }
    else if(arr[0]!=1){
      cout<<"NO"<<endl;
    }
    else{
      bool flag=true;
      for(int i=0;i<n;i++){
        if(sum<arr[i] && i>0){
          flag=false;
          break;
        }
        sum+=arr[i];
      }
      if(flag){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
  }
  return 0;
}