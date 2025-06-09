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

int countLessEqual(const vector<int>& arr, int x) {
  int low = 0, high = arr.size() - 1;
  int result = -1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (arr[mid] <= x) {
      result = mid;      
      low = mid + 1;     
    } 
    else {
      high = mid - 1;
    }
  }
  return result + 1;  
}

int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    int n,q;
    cin>>n>>q;
    vi arr(n);
    vector<long long>arr3;
    ll sum=0;
    FOR(i,n){
      cin>>arr[i];
      sum+=arr[i];
      arr3.PB(sum);
    }
    vi arr2;
    int maximum=0;
    FOR(i,n){
      maximum=max(arr[i],maximum);
      arr2.PB(maximum);
    }
    while(q--){
      int x;
      cin>>x;
      if(x<arr[0]){
        cout<<"0"<<" ";
        continue;
      }
      int j=countLessEqual(arr2,x);
      cout<<arr3[j-1]<<" ";
    }
    cout<<endl;
  }
  return 0;
}