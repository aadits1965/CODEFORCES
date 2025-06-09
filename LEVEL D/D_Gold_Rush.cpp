#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  cout.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    bool flag=true;
    vector<int>arr;
    arr.push_back(n);
    if(n%3!=0 && n!=m){
      cout<<"NO"<<endl;
    }
    else{
      if(n==m){
        cout<<"YES"<<endl;
      }
      else{
        if(m>2*n/3){
          cout<<"NO"<<endl;
        }
        else{
          size_t i = 0;
          while (i < arr.size()) {
            int current = arr[i];
            if (current % 3 == 0) {
              int newElem = current / 3;
              arr.push_back(newElem*2); 
              arr.push_back(newElem); 
            }
            i++;
          }
          for(int i=0;i<arr.size();i++){
            if(arr[i]==m){
              cout<<"YES"<<endl;
              flag=false;
              break;
            }
          }
          if(flag){
            cout<<"NO"<<endl;
          }
        }
      }
    }
  }
  return 0;
}