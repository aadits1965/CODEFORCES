#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  cout.tie(nullptr); 
  int t,count=0;
  cin>>t;
  vector<int>arr;
  arr.push_back(0);
  arr.push_back(1);
  if(t==0){
    cout<<"0 0 0"<<endl;
  }
  else{
    while (true) {
      int next_fib = arr[arr.size() - 1] + arr[arr.size() - 2];
      if (next_fib > 1000000000) break;
      arr.push_back(next_fib);
    }
    for(int i=arr.size()-1;i>=0;i--){
      if(t>=arr[i]){
        cout<<arr[i]<<" ";
        t=t-arr[i];
        count++;
        if(count==3){
          break;
        }
      }
    }
  }
  if(count==2){
    cout<<"0"<<endl;
  }
  cout<<endl;
  return 0;
}