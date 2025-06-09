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
    vector<vector<char>> arr(n,vector<char>(m));
    bool flag=false;
    FOR(i,n){
      FOR(j,m){
        cin>>arr[i][j];
      }
    } 
    int count=0;
    for(int i=0;i<n;i++){
      if(arr[i][0]=='W'){
        count++;
      }
    }
    int count1=0;
    for(int i=0;i<n;i++){
      if(arr[i][m-1]=='W'){
        count1++;
      }
    }
    if((count==0 && count1==n) || (count1==0 && count==n)){
      flag=true;
    }
    count=0;
    count1=0;
    for(int i=0;i<m;i++){
      if(arr[0][i]=='W'){
        count++;
      }
    }
    for(int i=0;i<m;i++){
      if(arr[n-1][i]=='W'){
        count1++;
      }
    }
    if((count==0 && count1==m) || (count1==0 && count==m)){
      flag=true;
    }
    if(flag){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }
  }
  return 0;
}