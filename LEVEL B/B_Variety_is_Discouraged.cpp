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
    unordered_set<int>unique(all(arr));
    if(n==1){
      cout<<"1 1"<<endl;
      continue;
    }
    if(unique.size()==1){
      cout<<"0"<<endl;
      continue;
    }
    if(unique.size()==n){
      cout<<"1 "<<n<<endl;
      continue;
    }
    unordered_map<int, int> freq; 
    for (int num : arr) {
      freq[num]++;
    }
    int l = 0, r = 0; 
    int maxLength = 0, start = -1, end = -1;
    while (r < n) {
      if (freq[arr[r]] > 1) {
        l = r + 1; 
      } 
      else {
        if (r - l + 1 > maxLength) {
          maxLength = r - l + 1;
          start = l;
          end = r;
        }
      }
      r++; 
    }
    if(start==-1 || end ==-1){
      cout<<"0"<<endl;
      continue;
    }
    cout<<start+1<<" "<<end+1<<endl;
  }
  return 0;
}