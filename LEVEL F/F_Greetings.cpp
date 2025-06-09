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
void merge(vector<long long>& arr, long long l,long long mid, long long r, long long &ans){
  vector<long long>temp;
  long long left=l;
  long long right=mid+1;
  while(left<=mid && right<=r){
    if(arr[left]<=arr[right]){
      temp.push_back(arr[left]);
      left++;
    }
    else if(arr[left]>arr[right]){
      temp.push_back(arr[right]);
      ans+=(mid - left + 1);
      right++;
    }
  }
  while(left<=mid){
    temp.push_back(arr[left]);
    left++;
  }
  while(right<=r){
    temp.push_back(arr[right]);
    right++;
  }
  for(long long i=l;i<=r;i++){
    arr[i]=temp[i-l];
  }
}
void mergeSort(vector<long long>& arr, long long l, long long r, long long &ans) {
  if(l>=r){
    return;
  }
  long long mid=(l+r)/2;
  mergeSort(arr,l,mid,ans);
  mergeSort(arr,mid+1,r,ans);
  merge(arr,l,mid,r,ans);
}
long long inversionCount(vector<long long> &arr) {
  long long l=0;
  long long r=arr.size()-1;
  long long ans=0;
  mergeSort(arr,l,r,ans);
  return ans;
}
int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    vector<pair<long long,long long>>arr(n);
    FOR(i,n){
      cin>>arr[i].F>>arr[i].S;
    }
    sortall(arr);
    vector<long long>end;
    FOR(i,n){
      end.PB(arr[i].S);
    }
    long long ans=inversionCount(end);
    cout<<ans<<endl;
  }
  return 0;
}

