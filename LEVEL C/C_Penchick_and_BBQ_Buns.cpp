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
    if(n%2!=0){
      if(n<27){
        cout<<"-1"<<endl;
      }
      else{
        int q=(n-27)/2;
        cout<<"1 ";
        for(int i=3;i<=6;i++){
          cout<<i<<" "<<i<<" ";
        }
        cout<<"1 2 ";
        for(int i=7;i<=13;i++){
          cout<<i<<" "<<i<<" ";
        }
        cout<<"1 2 ";
        for(int i=14;i<=14+q-1;i++){
          cout<<i<<" "<<i<<" ";
        }
        cout<<endl;
      }
    }
    else{
      for(int i=1;i<=n/2;i++){
        cout<<i<<" "<<i<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}