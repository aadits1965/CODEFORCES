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
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    FOR(i,n){
      FOR(j,m){
        cin>>arr[i][j];
      }
    }
    bool flag=true;
    if(arr[0][0]>2 || arr[0][m-1]>2 || arr[n-1][0]>2 || arr[n-1][m-1]>2){
      flag=false;
    }
    for(int i=1;i<m-1;i++){
      if(arr[0][i]>3 || arr[n-1][i]>3){
        flag=false;
        break;
      }
    }
    for(int j=1;j<n-1;j++){
      if(arr[j][0]>3 || arr[j][m-1]>3){
        flag=false;
        break;
      }
    }
    for(int i=1;i<n-1;i++){
      for(int j=1;j<m-1;j++){
        if(arr[i][j]>4){
          flag=false;
          break;
        }
      }
    }
    if(!flag){
      cout<<"NO"<<endl;
      continue;
    }
    else{
      cout<<"YES"<<endl;
      arr[0][0]=arr[0][m-1]=arr[n-1][0]=arr[n-1][m-1]=2;
      for(int i=1;i<m-1;i++){
        arr[0][i]=arr[n-1][i]=3;
      }
      for(int j=1;j<n-1;j++){
        arr[j][0]=arr[j][m-1]=3;
      }
      for(int i=1;i<n-1;i++){
        for(int j=1;j<m-1;j++){
          arr[i][j]=4;
        }
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}