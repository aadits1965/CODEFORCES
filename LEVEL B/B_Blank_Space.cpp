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
      cin>>arr[i];
    }
    int count=0;
    vector<int>b;
    for(int i=0;i<n;i++){
      if(arr[i]==0){
        count++;
        b.push_back(count);
      }
      else{
        count=0;
        b.push_back(count);
      }
    }
    int maximum = *max_element(b.begin(),b.end());
    cout<<maximum<<endl;
    
  }
  return 0;
}