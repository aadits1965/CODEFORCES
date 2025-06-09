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
  vi arr(t);
  FOR(i,t){
    cin>>arr[i];
  }
  int count=0;
  int ans=0;
  for(int i=0;i<t;i++){
    if(arr[i]==1){
      ans++;
    }
  }
  if(ans==t){
    cout<<t-1<<endl;
  }
  else{
    int ans2=0;
    for(int i=0;i<t;i++){
      if(arr[i]==0){
        count++;
      }
      else{
        count--;
        if(count<0){
          count=0;
        }
      }
      ans2=max(ans2,count);
    }
    cout<<ans+ans2<<endl;
  }
  return 0;
}