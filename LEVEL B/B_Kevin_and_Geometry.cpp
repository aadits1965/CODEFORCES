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
    unordered_map<int,int>freq_map;
    FOR(i,n){
      freq_map[arr[i]]++;
    }
    int highestFreq = 0;
    for (auto& pair : freq_map) {
      highestFreq = max(highestFreq, pair.second);
    }
    if (highestFreq == 1) {
      cout << -1 << endl;
      continue;
    }
    vi greaterThan2;
    vi exactly2;
    vi exactly1;
    for (auto& pair : freq_map) {
      if (pair.second > 2) {
        greaterThan2.push_back(pair.first);
      } 
      else if (pair.second == 2) {
        exactly2.push_back(pair.first);
      } 
      else if (pair.second == 1) {
        exactly1.push_back(pair.first);
      }
    }
    if(highestFreq==2){
      bool flag=false;
      FOR(i,exactly2.size()){
        vector<int> sortedArr = exactly1;
        sort(sortedArr.begin(), sortedArr.end());
        FOR(j,sortedArr.size()){
          for (size_t k = j + 1; k < sortedArr.size(); ++k) {
            int diff = abs(sortedArr[k] - sortedArr[j]);
            if (diff < 2 * exactly2[i]) {
              cout << sortedArr[j] << " " << sortedArr[k] << " " << exactly2[i] << " " << exactly2[i] << endl;
              flag=true;
              break;
            }
          }
          if(flag){
            break;
          }
        }
        if(flag){
          break;
        }
      }
      if(!flag){
        cout<<"-1"<<endl;
      }
    }
    else{
      bool flag=false;
      FOR(i,exactly2.size()){
        vector<int> sortedArr = exactly1;
        sort(sortedArr.begin(), sortedArr.end());
        FOR(j,sortedArr.size()){
          for (size_t k = j + 1; k < sortedArr.size(); ++k) {
            int diff = abs(sortedArr[k] - sortedArr[j]);
            if (diff < 2 * exactly2[i]) {
              cout << sortedArr[j] << " " << sortedArr[k] << " " << exactly2[i] << " " << exactly2[i] << endl;
              flag=true;
              break;
            }
          }
          if(flag){
            break;
          }
        }
        if(flag){
          break;
        }
      }
      if(!flag){
        cout<<"-1"<<endl;
      }
    }
  }
  return 0;
}