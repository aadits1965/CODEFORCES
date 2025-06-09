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
    if(s.size()==1 && arr[0]==0){
      cout<<"0"<<endl;
      cout<<endl;
      continue;
    }
    sortall(arr);
    bool flag=true;
    int count=0;
    vi a;
    if(n==1){
      cout<<1<<endl;
      cout<<arr[0]<<endl;
      continue;
    }
    while(flag && count<40){
      int d=(arr[0]+arr[n-1])/2;
      a.PB(d);
      FOR(i,n){
        arr[i]=abs(arr[i]-d);
      }
      count++;
      sortall(arr);
      unordered_set<int>p(all(arr));
      if(p.size()==1 && arr[0]==0){
        flag=false;
        break;
      }
    }
    if(flag){
      cout<<"-1"<<endl;
    }
    else{
      cout<<a.size()<<endl;
      FOR(i,a.size()){
        cout<<a[i]<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}