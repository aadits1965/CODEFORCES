#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    long long product=1;
    for(int i=0;i<n;i++){
      product=product*arr[i];
    }
    if(2023%product!=0){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
      cout<<2023/product<<" ";
      for(int i=0;i<k-1;i++){
        cout<<"1"<<" ";
      }
      cout<<endl;
    }

  }
  return 0;
}