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
      if(i%2==1){
        arr[i]*=-1;
      }
    } 
    map<long long, int> preSumMap;
    long long sum = 0;
    bool flag=true;
    for (int i = 0; i < n; i++) {
      sum += arr[i];
      if (sum == 0) {
        flag=false;
        break;
      }          
      long long rem = sum;
      if (preSumMap.find(rem) != preSumMap.end()) {
        flag=false;
        break;
      }
      if (preSumMap.find(sum) == preSumMap.end()) {
        preSumMap[sum] = i;
      }
    }
    if(flag){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }
  }
  return 0;
}