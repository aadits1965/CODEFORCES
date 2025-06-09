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
    int n,a,b;
    cin>>n>>a>>b;
    if(a+b>(n-2)){
      cout<<"-1"<<endl;
      continue;
    }
    if(a>ceil(1.0*(n-2)/2) || b>ceil(1.0*(n-2)/2)){
      cout<<"-1"<<endl;
      continue;
    }
    if(a+b==n-2 && a==b){
      for(int i=1;i<=n/2;i++){
        cout<<i<<" "<<n-i+1<<" ";
      }
      cout<<endl;
      continue;
    }
    if(a+b==n-2 && a>b){
      for(int i=1;i<=n/2;i++){
        cout<<i<<" "<<n-i+1<<" ";
      }
      cout<<n/2+1<<endl;
      continue;
    }
    if(a+b==n-2 && a<b){
      for(int i=n;i>=n/2+2;i--){
        cout<<i<<" "<<n-i+1<<" ";
      }
      cout<<n/2+1<<endl;
      continue;
    }
    if(a>b && a-b==1){
      for(int i=1;i<=a;i++){
        cout<<i<<" "<<n-i+1<<" ";
      }
      for(int i=n-a;i>=a+1;i--){
        cout<<i<<" ";
      }
      cout<<endl;
      continue;
    }
    if(a<b && b-a==1){
      for(int i=n;i>=n-b+1;i--){
        cout<<i<<" "<<n-i+1<<" ";
      }
      for(int i=b+1;i<n-b+1;i++){
        cout<<i<<" ";
      }
      cout<<endl;
      continue;
    }
    if(a==b){
      for(int i=n;i>=n-b+1;i--){
        cout<<i<<" "<<n-i+1<<" ";
      }
      for(int i=n-b;i>=b+1;i--){
        cout<<i<<" ";
      }
      cout<<endl;
      continue;
    }
    cout<<"-1"<<endl;
  }
  return 0;
}