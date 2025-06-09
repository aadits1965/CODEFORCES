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
    vi arr(2*n);
    FOR(i,2*n){
      cin>>arr[i];
    }
    /*FOR(i,2*n){
      int minimum=arr[i];
      FOR(i,2*n){
        minimum=min(minimum,arr[i]);
      }
      long long d=minimum;
      sort(arr.rbegin(),arr.rend());
      long long sum=0;
      for(int i=0;i<2*n-1;i++){
        if(i%2!=0){
          sum+=(-1*arr[i]);
        }
        else{
          sum+=arr[i];
        }
      }
      long long req=sum-d;
      cout<<d<<" ";
      FOR(i,2*n-1){
        cout<<arr[i]<<" ";
      }
      cout<<req<<endl;
    }
    vi arr1;
    vi arr2;
    sort(arr.rbegin(),arr.rend());
    for(int i=0;i<n;i++){
      arr1.PB(arr[i]);
    }
    for(int i=2*n-1;i>=n;i--){
      arr2.PB(arr[i]);
    }
    long long sum=0;
    FOR(i,n){
      sum+=arr1[i]-arr2[i];
    }
    cout<<sum<<" ";
    FOR(i,n){
      cout<<arr1[i]<<" "<<arr2[i]<<" ";
    }
    cout<<endl;*/
    sortall(arr);
    long long sum1=0,sum2=0;
    for(int i=0;i<n-1;i++){
      sum1+=arr[i];
    }
    for(int i=n-1;i<2*n;i++){
      sum2+=arr[i];
    }
    long long d=sum2-sum1;
    vector<long long>result;
    result.PB(arr[n-1]);
    for(int i=0;i<n-1;i++){
      result.PB(arr[i]);
      result.PB(arr[2*n-i-1]);
    }
    result.PB(d);
    result.PB(arr[n]);
    FOR(i,2*n+1){
      cout<<result[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}