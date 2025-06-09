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
    unordered_map<int, int> freq_map;
    for (int num : arr) {
      freq_map[num]++;
    }
    bool flag=false;
    for (int num : arr) {
      if(freq_map[num]%2==0){
        flag=true;
      }
      else{
        flag=false;
        break;
      }
    }
    if(flag){
      cout<<"YES"<<endl;
      continue;
    }
    int max_freq = 0;
    for (const auto& pair : freq_map) {
      max_freq = max(max_freq, pair.second);
    }
    if(max_freq>ceil(1.0*(n+1)/2)){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }

  }
  return 0;
}