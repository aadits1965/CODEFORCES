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
    int n,k;
    cin>>n>>k;
    vi arr(2*n);
    FOR(i,2*n){
      cin>>arr[i];
    }
    vi firsthalf(n),secondhalf(n);
    for(int i=0;i<n;i++){
      firsthalf[i]=arr[i];
    }
    for(int i=n;i<2*n;i++){
      secondhalf[i-n]=arr[i];
    }
    unordered_map<int, int> freq1;
    for (int num : firsthalf) {
      freq1[num]++;
    }
    unordered_map<int, int> freq2;
    for (int num : secondhalf) {
      freq2[num]++;
    }
    vi res1,res2;
    vi res3,res4;
    for (auto it = freq1.begin(); it != freq1.end(); ++it) {
      if (it->second == 2) {
        res1.push_back(it->first);
        res1.push_back(it->first);
      }
      if (it->second == 1) {
        res3.push_back(it->first);
      }
    }
    for (auto it = freq2.begin(); it != freq2.end(); ++it) {
      if (it->second == 2) {
        res2.push_back(it->first);
        res2.push_back(it->first);
      }
      if (it->second == 1) {
        res4.push_back(it->first);
      }
    }
    vi result1,result2;
    if(min(res1.size(),res2.size())<2*k){
      for(int i=0;i<min(res1.size(),res2.size());i++){
        result1.PB(res1[i]);
        result2.PB(res2[i]);
      }
      int diff=2*k-min(res1.size(),res2.size());
      sortall(res3);
      sortall(res4);
      for(int i=0;i<diff;i++){
        result1.PB(res3[i]);
        result2.PB(res4[i]);
      }
    }
    else{
      for(int i=0;i<2*k;i++){
        result1.PB(res1[i]);
        result2.PB(res2[i]);
      }
    }
    for(int i=0;i<result1.size();i++){
      cout<<result1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<result2.size();i++){
      cout<<result2[i]<<" ";
    } 
    cout<<endl;
  }
  return 0;
}