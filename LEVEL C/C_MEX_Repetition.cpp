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

void rightRotate(vector<long long>& arr, long long k) {
  int n = arr.size();
  k = k % n; 
  reverse(arr.begin(), arr.end());
  reverse(arr.begin(), arr.begin() + k);
  reverse(arr.begin() + k, arr.end());
}

int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    long long n,k;
    cin>>n>>k;
    vector<long long> arr(n+1);
    long long sum=0;
    FOR(i,n){
      cin>>arr[i];
      sum+=arr[i];
    }
    arr[n]=n*(n+1)/2-sum;
    rightRotate(arr,k);
    FOR(i,n){
      cout<<arr[i]<<" ";
    }
    cout<<endl;

  }
  return 0;
}