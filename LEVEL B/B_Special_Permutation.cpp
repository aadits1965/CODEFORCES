#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  cout.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n,a,b,count=0;
    cin>>n>>a>>b;
    vector<int>arr;
    if(a>n/2+1 || b<n/2){
      cout<<"-1"<<endl;
    }
    else{
      arr.push_back(a);
      for(int i=0;count<n/2-1 && (n-i)>=a;i++){
        if((n-i)!=b && (n-i)!=a){
          count++;
          arr.push_back(n-i);
        }
        else{
          continue;
        }
      }
      arr.push_back(b);
      count=0;
      for(int i=1;b-i>0 && count<n/2-1 ;i++){
        if(find(arr.begin(), arr.end(), b-i) == arr.end()){
          arr.push_back(b-i);
          count++;
        } 
        else{
          continue;
        }
      }
      if(arr.size()<n){
        cout<<"-1"<<endl;
      }
      else{
        for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
        }
        cout<<endl;
      }
    }
  }
  return 0;
}
