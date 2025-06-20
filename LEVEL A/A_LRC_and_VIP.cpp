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
    unordered_set<int>s(all(arr));
    if(s.size()==1){
      cout<<"NO"<<endl;
      continue;
    }
    int j=0;
    int maximum=arr[0];
    FOR(i,n){
      if(arr[i]>maximum){
        maximum=arr[i];
        j=i;
      }
    }
    cout<<"YES"<<endl;
    FOR(i,n){
      if(i!=j){
        cout<<"1 ";
      }
      else{
        cout<<"2 ";
      }
    }
    cout<<endl;
  }
  return 0;
}