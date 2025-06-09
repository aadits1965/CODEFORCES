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

bool binarySearch(int arr[], int size, int target) {
  int left = 0, right = size - 1;
  while (left <= right) {
  int mid = left + (right - left) / 2; 
  if (arr[mid] == target)
    return true;
  if (arr[mid] > target)
    right = mid - 1;
  else
    left = mid + 1;
  }
  return false;
}

int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    int n,m,k;
    cin>>n>>m>>k;
    int arr[m];
    int brr[k];
    FOR(i,m){
      cin>>arr[i];
    }
    FOR(i,k){
      cin>>brr[i];
    }
    if(k==n){
      FOR(i,m){
        cout<<"1";
      }
      cout<<endl;
      continue;
    }
    if(k<n-1){
      FOR(i,m){
        cout<<"0";
      }
      cout<<endl;
      continue;
    }
    FOR(i,m){
      int target=arr[i];
      bool result = binarySearch(brr, k, target);
      if(result){
        cout<<"0";
      }
      else{
        cout<<"1";
      }
    }
    cout<<endl;
  }
  return 0;
}