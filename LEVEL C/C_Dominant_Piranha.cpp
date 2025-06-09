#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    int n,j=0;
    cin>>n;
    int maximum=0;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]>=maximum){
        maximum=arr[i];
        j=i+1;
      }
    }
    unordered_set<int>elements(arr.begin(),arr.end());
    if(elements.size()==1){
      cout<<"-1"<<endl;
    }
    else{
      if(j!=n){
        cout<<j<<endl;
      }
      else{
        if(arr[n-2]!=maximum){
          cout<<n<<endl;
        }
        else{
          for(int i=1;i<n;i++){
            if(arr[i]==maximum && arr[i-1]!=maximum){
              cout<<i+1<<endl;
              break;
            }
          }
        }
      }
    }
  }
  return 0;
}