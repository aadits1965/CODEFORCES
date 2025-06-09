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
    int n,m,k;
    cin>>n>>m>>k;
    if(k<abs(n-m) || k>max(n,m)){
      cout<<"-1"<<endl;
      continue;
    }
    if(n>m){
      if(m+k==n){
        for(int i=0;i<n-k;i++){
          cout<<"01";
        }
        for(int i=0;i<m-n+k;i++){
          cout<<"1";
        }
      }
      else{
        for(int i=0;i<n-k;i++){
          cout<<"10";
        }
        for(int i=0;i<m-n+k;i++){
          cout<<"1";
        }
      }
      for(int i=0;i<k;i++){
        cout<<"0";
      }
      cout<<endl;
    }
    else if(m>n){
      if(n+k==m){
        for(int i=0;i<m-k;i++){
          cout<<"10";
        }
        for(int i=0;i<n-m+k;i++){
          cout<<"0";
        }
      }
      else{
        for(int i=0;i<m-k;i++){
          cout<<"01";
        }
        for(int i=0;i<n-m+k;i++){
          cout<<"0";
        }
      }
      for(int i=0;i<k;i++){
        cout<<"1";
      }
      cout<<endl;
    }
    else{
      for(int i=0;i<n+m-2*k;i+=2){
        cout<<"10";
      }
      for(int i=0;i<k;i++){
        cout<<"1";
      }
      for(int i=0;i<k;i++){
        cout<<"0";
      }
      cout<<endl;
    }
  }
  return 0;
}