#include <bits/stdc++.h>
using namespace std;

int changes(string a,string b,string c) {
  vector<vector<int>>arr(a.size()+1,vector<int>(b.size()+1,100000000));
  arr[0][0]=0;  
  for(int i=0;i<=a.size();i++){
    for(int j=0;j<=b.size();j++){
      if(i>0){
        int change;
        if((a[i-1]==c[i+j-1])){
          change=0;
        }
        else{
          change=1;
        }
        arr[i][j]=min(arr[i][j],arr[i-1][j]+change);
      }
      if(j>0){
        int change;
        if((b[j-1]==c[i+j-1])){
          change=0;
        }
        else{
          change=1;
        }
        arr[i][j]=min(arr[i][j],arr[i][j - 1]+change);
      }
    }
  }
  return arr[a.size()][b.size()];
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string a,b,c;
    cin>>a>>b>>c;
    cout<<changes(a,b,c)<<endl;
  }  
  return 0;
}
