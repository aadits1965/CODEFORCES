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

int minOfMaxDistances(const vector<int>& arr) {
  int n = arr.size();
  unordered_map<int, vector<int>> positions;
  for (int i = 0; i < n; ++i) {
    positions[arr[i]].push_back(i);
  }
  int result = INT_MAX;
  for (auto& it : positions) {
    int value = it.first;
    vector<int>& pos = it.second;
    int maxGap = 0;
    vi a;
    for(int i=0;i<pos.size();++i) {
      if(i==0){
        a.PB(pos[i]);
        continue;
      }
      a.PB(pos[i]-pos[i-1]-1);
    }
    a.PB(n-pos[pos.size()-1]-1);
    sort(a.rbegin(),a.rend());
    int d=a[0]/2;
    int e=a[1];
    result=min(result,max(d,e));
  }
  return (result == INT_MAX) ? -1 : result;
}


int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    vi arr(n);
    FOR(i,n){
      cin>>arr[i];
    }  
    cout<<minOfMaxDistances(arr)<<endl;
  }
  return 0;
}