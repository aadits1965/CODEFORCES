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
    int count=0;
    int count1=0;
    FOR(i,n){
      cin>>arr[i];
      if(arr[i]==1){
        count++;
      }
    }
    sortall(arr);
    FOR(i,n-1){
      if(arr[i+1]-arr[i]==1){
        count1++;
      }
    }
    if(count==1){
      cout<<"YES"<<endl;
      continue;
    }
    if(count>1){
      cout<<"NO"<<endl;
      continue;
    }
    if(count1){
      cout<<"YES"<<endl;
      continue;
    }
    set<int>s(all(arr));
    if(s.size()==1){
      cout<<"NO"<<endl;
      continue;
    }
    if(s.size()==n){
      cout<<"YES"<<endl;
      continue;
    }
    if(arr[0]!=arr[1]){
      cout<<"YES"<<endl;
      continue;
    }
    bool flag=true;
    FOR(i,n){
      if(arr[i]%arr[0]){
        flag=false;
        break;
      }
    }
    if(!flag){
      cout<<"YES"<<endl;
      continue;
    }
    cout<<"NO"<<endl;
  }
  return 0;
}