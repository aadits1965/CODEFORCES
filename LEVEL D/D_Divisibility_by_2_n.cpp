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

int maxPowerOf2(int n) {
  int count = 0;
  while (n % 2 == 0) {
    n /= 2;
    count++;
  }
  return count;
}

int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vi arr(n);
    int ans=0;
    FOR(i,n){
      cin>>arr[i];
      ans+=maxPowerOf2(arr[i]);
    }
    if(ans>=n){
      cout<<"0"<<endl;
    }
    else{
      int count=0;
      vi a;
      for(int i=1;i<=n;i++){
        count+=maxPowerOf2(i);
        a.PB(maxPowerOf2(i));
      }
      sort(a.rbegin(),a.rend());
      if(n-ans>count){
        cout<<"-1"<<endl;
      }
      else{
        int ans1=0;
        int d=n-ans;
        for(int i=0;i<a.size();i++){
          d-=a[i];
          ans1++;
          if(d<=0){
            break;
          }
        }
        cout<<ans1<<endl;
      }
    }
  }
  return 0;
}