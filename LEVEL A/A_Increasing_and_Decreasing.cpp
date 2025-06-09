#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
    int x,y,n;
    cin>>x>>y>>n;
    vector<int>arr(n);
    arr[0]=x;
    arr[n-1]=y;
    int j=1;
    if(y-x>=(n-1)*(n)/2){
      for(int i=n-2;i>0;i--){
        arr[i]=arr[i+1]-j;
        j++;
      }
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
    else{
      cout<<"-1"<<endl;
    }
  }
  return 0;
}