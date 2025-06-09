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
    unordered_map<int,int>m;
    FOR(i,n){
      m[arr[i]]++;
    }
    int x=0;
    if(m[0]==0){
      cout<<"0"<<endl;
    }
    else{
      bool flag=true;
      int count=0;
      while(flag){
        if(m[x]==1 && count==0){
          count++;
          x++;
        }
        else if(m[x]==1 || m[x]==0){
          flag=false;
          break;
        }
        else{
          x++;
        }
      }
      cout<<x<<endl;
    }
  }
  return 0;
}