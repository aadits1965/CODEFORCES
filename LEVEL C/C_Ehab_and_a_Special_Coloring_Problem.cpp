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
  int n;
  cin>>n;
  vector<int>arr(n+1,0);
  int i=1;
  int zeroCount = count(arr.begin(), arr.end(), 0);
  int k=-1;
  while(zeroCount>1){
    for(int l=1;l<=n;l++){
      if(arr[l]==0){
        k=l;
        break;
      }
    }
    for(int j=k;j<=n;j+=(k+1)){
      arr[j]=i;
    }
    zeroCount = count(arr.begin(), arr.end(), 0);
    if(zeroCount==1){
      break;
    }
    else{
      i++;
    }
  }
  for(int i=1;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}