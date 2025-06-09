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
    sortall(arr);
    int j=-1;
    vi result(n);
    int diff=INT_MAX;
    if(n==2){
      cout<<arr[0]<<" "<<arr[1]<<endl;
      continue;
    }
    FOR(i,n-1){
      if(arr[i+1]-arr[i]<diff){
        diff=arr[i+1]-arr[i];
        result[0]=arr[i+1];
        result[n-1]=arr[i];
        j=i+1;
      }
    }
    int i=1;
    for(int k=j+1;k<n;k++){
      result[i]=arr[k];
      i++;
    }
    FOR(l,j-1){
      result[i]=arr[l];
      i++;
    }
    FOR(i,n){
      cout<<result[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}