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
    int n,k;
    cin>>n>>k;
    vi arr(n);
    FOR(i,n){
      cin>>arr[i];
    }
    if(n==k){
      vi soln;
      for(int i=1;i<n;i+=2){
        soln.PB(arr[i]);
      }
      soln.PB(0);
      FOR(i,soln.size()){
        if(soln[i]!=i+1){
          cout<<i+1<<endl;
          break;
        }
      }
    }
    else{
      bool flag=false;
      for(int i=1;i<n-k+1;i++){
        if(arr[i]!=1){
          cout<<"1"<<endl;
          flag=true;
          break;
        }
      }
      if(flag){
        continue;
      }
      if(n-k==1){
        if(arr[2]==1){
          cout<<"2"<<endl;
          continue;
        }
        cout<<"1"<<endl;
        continue;
      }
      if(arr[n-k+1]!=1){
        cout<<"1"<<endl;
      }
      else{ 
        cout<<"2"<<endl;
      }
    }
  }
  return 0;
}