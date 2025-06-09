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
    if(n%2==0){
      if(k%2==0){
        if(n<k){
          cout<<"NO"<<endl;
        }
        else{
          cout<<"YES"<<endl;
          int d=n/k;
          if(n%k==0){
            for(int i=1;i<=k;i++){
              cout<<n/k<<" ";
            }
            cout<<endl;
            continue;
          }
          if(d%2==0){
            int e=d+2;
            int x=(n-e*k)/(d-e);
            for(int i=1;i<=x;i++){
              cout<<d<<" ";
            }
            for(int i=1;i<=k-x;i++){
              cout<<e<<" ";
            }
            cout<<endl;
          }
          else{
            if(d!=1){
              d--;
            }
            int e=d+2;
            int x=(n-e*k)/(d-e);
            for(int i=1;i<=x;i++){
              cout<<d<<" ";
            }
            for(int i=1;i<=k-x;i++){
              cout<<e<<" ";
            }
            cout<<endl;
          }
        }
      }
      else{
        if(n<2*k){
          cout<<"NO"<<endl;
        }
        else{
          cout<<"YES"<<endl;
          if(n%k==0){
            for(int i=1;i<=k;i++){
              cout<<n/k<<" ";
            }
            cout<<endl;
            continue;
          }
          int d=n/k;
          if(d%2==0){
            int e=d+2;
            int x=(n-e*k)/(d-e);
            for(int i=1;i<=x;i++){
              cout<<d<<" ";
            }
            for(int i=1;i<=k-x;i++){
              cout<<e<<" ";
            }
            cout<<endl;
          }
          else{
            d--;
            int e=d+2;
            int x=(n-e*k)/(d-e);
            for(int i=1;i<=x;i++){
              cout<<d<<" ";
            }
            for(int i=1;i<=k-x;i++){
              cout<<e<<" ";
            }
            cout<<endl;
          }
        }
      }
    }
    else{
      if(k%2==0){
        cout<<"NO"<<endl;
      }
      else{
        if(n<k){
          cout<<"NO"<<endl;
        }
        else{
          cout<<"YES"<<endl;
          int d=n/k;
          if(n%k==0){
            for(int i=1;i<=k;i++){
              cout<<n/k<<" ";
            }
            cout<<endl;
            continue;
          }
          if(d%2==0){
            d--;
            int e=d+2;
            int x=(n-e*k)/(d-e);
            for(int i=1;i<=x;i++){
              cout<<d<<" ";
            }
            for(int i=1;i<=k-x;i++){
              cout<<e<<" ";
            }
            cout<<endl;
          }
          else{
            int e=d+2;
            int x=(n-e*k)/(d-e);
            for(int i=1;i<=x;i++){
              cout<<d<<" ";
            }
            for(int i=1;i<=k-x;i++){
              cout<<e<<" ";
            }
            cout<<endl;
          }
        }
      }
    }
  }
  return 0;
}