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

long long findMinAfterOperations(vector<long long>& arr, long long k) {
  sort(arr.begin(), arr.end());  
  int n = arr.size();
  int i = 0; 
  while (i < n - 1 && k > 0) {
    long long diff = arr[i + 1] - arr[i];  
    long long count = (i + 1) * diff;  
    if (k >= count) {  
      k -= count;  
      i++;  
    } 
    else {
      return arr[i] + (k / (i + 1));  
    }
  }
  return arr[i] + (k / (i + 1)); 
}

int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    long long n,k;
    cin>>n>>k;
    vector<long long>arr(n);
    vector<long long>arr2(n);
    FOR(i,n){
      cin>>arr[i];
    }
    arr2=arr;
    long long s=k;
    long long d=findMinAfterOperations(arr2,s);
    FOR(i,n){
      if(arr[i]<d){
        s-=(d-arr[i]);
        arr[i]=d;
      }
    }
    int count=0;
    FOR(i,n){
      if(arr[i]>d){
        count++;
      }
    }
    long long ans=(d-1)*n+1+count+s;
    cout<<ans<<endl;
  }
  return 0;
}