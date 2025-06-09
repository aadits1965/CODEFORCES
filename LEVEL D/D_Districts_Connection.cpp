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
    unordered_map<int, int> freq;
    for (int x : arr){
      freq[x]++;
    }
    int result = -1;
    for (int x : arr) {
      if (freq[x] == 1) {
        result = x;
        break;
      }
    }
    int j=-1;
    unordered_map<int, int> first_index;
    vector<pair<int, int>> res;
    if(result!=-1){
      FOR(i,n){
        if(arr[i]==result){
          j=i;
          break;
        }
      }
    }
    else{
      for (int i = 0; i < n; ++i) {
        if (first_index.find(arr[i]) == first_index.end()) {
          first_index[arr[i]] = i;
          res.emplace_back(arr[i], i);
          if (res.size() == 2){ 
            break;
          }
        }
      }
    }
    if(s.size()==n){
      cout<<"YES"<<endl;
      FOR(i,n-1){
        cout<<i+1<<" "<<i+2<<endl;
      }
    }
    else{
      if(s.size()==1){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
        if(result!=-1){
          FOR(i,n){
            if(arr[i]!=result){
              cout<<i+1<<" "<<j+1<<endl;
            }
          }
        }
        else{
          int count=0;
          FOR(i,n){
            if(arr[i]==res[0].F && count==0){
              count++;
              continue;
            }
            if(arr[i]==res[0].F){
              cout<<i+1<<" "<<res[1].S+1<<endl;
            }
            else if(arr[i]==res[1].F){
              cout<<i+1<<" "<<res[0].S+1<<endl;
            }
            else{
              cout<<i+1<<" "<<res[1].S+1<<endl;
            }
          }
        }
      }
    }
  }
  return 0;
}