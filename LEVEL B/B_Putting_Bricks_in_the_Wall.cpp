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
    vector<vector<char>>grid(n, vector<char>(n));
    FOR(i,n){
      FOR(j,n){
        cin>>grid[i][j];
      }
    }
    vector<int>arr;
    if(grid[0][1]==grid[1][0] && grid[0][1]=='1'){
      if(grid[n-2][n-1]=='1'){
        arr.PB(n-1);
        arr.PB(n);
      }
      if(grid[n-1][n-2]=='1'){
        arr.PB(n);
        arr.PB(n-1);
      }
      cout<<arr.size()/2<<endl;
      for(int i=0;i<arr.size();i+=2){
        cout<<arr[i]<<" "<<arr[i+1]<<endl;
      }
      continue;
    }
    if(grid[0][1]==grid[1][0] && grid[0][1]=='0'){
      if(grid[n-2][n-1]=='0'){
        arr.PB(n-1);
        arr.PB(n);
      }
      if(grid[n-1][n-2]=='0'){
        arr.PB(n);
        arr.PB(n-1);
      }
      cout<<arr.size()/2<<endl;
      for(int i=0;i<arr.size();i+=2){
        cout<<arr[i]<<" "<<arr[i+1]<<endl;
      }
      continue;
    }
    if(grid[n-1][n-2]==grid[n-2][n-1] && grid[n-2][n-1]=='1'){
      if(grid[0][1]=='1'){
        arr.PB(1);
        arr.PB(2);
      }
      if(grid[1][0]=='1'){
        arr.PB(2);
        arr.PB(1);
      }
      cout<<arr.size()/2<<endl;
      for(int i=0;i<arr.size();i+=2){
        cout<<arr[i]<<" "<<arr[i+1]<<endl;
      }
      continue;
    }
    if(grid[n-1][n-2]==grid[n-2][n-1] && grid[n-2][n-1]=='0'){
      if(grid[0][1]=='0'){
        arr.PB(1);
        arr.PB(2);
      }
      if(grid[1][0]=='0'){
        arr.PB(2);
        arr.PB(1);
      }
      cout<<arr.size()/2<<endl;
      for(int i=0;i<arr.size();i+=2){
        cout<<arr[i]<<" "<<arr[i+1]<<endl;
      }
      continue;
    }
    if(grid[0][1]=='0'){
      arr.PB(1);
      arr.PB(2);
    }
    if(grid[1][0]=='0'){
      arr.PB(2);
      arr.PB(1);
    }
    if(grid[n-2][n-1]=='1'){
      arr.PB(n-1);
      arr.PB(n);
    }
    if(grid[n-1][n-2]=='1'){
      arr.PB(n);
      arr.PB(n-1);
    }
    cout<<arr.size()/2<<endl;
    for(int i=0;i<arr.size();i+=2){
      cout<<arr[i]<<" "<<arr[i+1]<<endl;
    }
  }
  return 0;
}