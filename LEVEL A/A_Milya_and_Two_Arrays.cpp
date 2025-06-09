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
    vi arr(n),brr(n);
    FOR(i,n){
      cin>>arr[i];
    }
    FOR(i,n){
      cin>>brr[i];
    }
    unordered_set<int>uniqueb(all(brr));
    unordered_set<int>uniquea(all(arr));
    if(uniqueb.size()==1){
      if(uniquea.size()<=2){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }
    }
    else{
      if(uniqueb.size()==2){
        if(uniquea.size()==1){
          cout<<"NO"<<endl;
        }
        else{
          cout<<"YES"<<endl;
        }
      }
      else{
        cout<<"YES"<<endl;
      }
    }

  }
  return 0;
}