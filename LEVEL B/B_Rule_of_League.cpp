#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  while (t--) {
    int n, x, y,count=0;
    cin >> n >> x >> y;
    if ((x == 0 && y == 0) || (x != 0 && y != 0)) {
      cout << "-1" << endl;
      continue;
    }
    int step = (x != 0) ? x : y; 
    if ((n - 1) % step != 0) {
      cout << "-1" << endl;
      continue;
    }
    if(step==1){
      for(int i=2;i<=n;i++){
        cout<<i<<" ";
      }
      cout<<endl;
    }
    else{
      int start=1;
      for(int i=1;i<=n-1;i++){
        cout<<start<<" ";
        count++;
        if(count==step){
          if(start==1){
            start+=step+1;
            count=0;
          }
          else{
            start+=step;
            count=0;
          }
        }
      }
      cout<<endl;
    }
  }
  return 0;
}
