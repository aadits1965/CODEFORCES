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
    if(arr[0]>n){
      cout<<"NO"<<endl;
      continue;
    }
    bool flag=true;
    int j=1;
    for(int i=0;i<n;i++){
      int low = 0, high = n - 1, idx = n;
      while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] >= j) {
          low = mid + 1;
        } 
        else {
          idx = mid;
          high = mid - 1;
        }
      }
      if(idx!=arr[i]){
        flag=false;
        break;
      }
      j++;
    }
    if(flag){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}