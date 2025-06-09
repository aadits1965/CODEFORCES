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
    int n,m,q;
    cin>>n>>m>>q;
    vi a(n),b(m);
    FOR(i,n){
      cin>>a[i];
    }   
    FOR(i,m){
      cin>>b[i];
    }
    unordered_set<int> seen;
    vector<int> unique_in_order;
    for (int x : b) {
      if (seen.count(x) == 0) {
        unique_in_order.push_back(x);
        seen.insert(x);
      }
    }
    bool flag=false;
    FOR(i,unique_in_order.size()){
      if(a[i]!=unique_in_order[i]){
        flag=true;
        break;
      }
    }
    if(flag){
      cout<<"TIDAK"<<endl;
    }
    else{
      cout<<"YA"<<endl;
    }

  }
  return 0;
}