#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      arr[i]=2*(i+1);
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}