#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  bool flag=true;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr.begin(),arr.end());
  unordered_map<int,int>freqmap;
  for(int i : arr){
    freqmap[i]++;
    if(freqmap[i]>2){
      cout<<"NO"<<endl;
      flag=false;
      break;
    }
  }
  if(flag){
    vector<int>arr1;
    vector<int>arr2;
    cout<<"YES"<<endl;
    arr1.push_back(arr[0]);
    for(int i=0;i<n-1;i++){
      if(arr[i+1]>arr[i]){
        arr1.push_back(arr[i+1]);
      }
      else{
        arr2.push_back(arr[i+1]);
      }
    }
    cout<<arr1.size()<<endl;;
    for(int i=0;i<arr1.size();i++){
      cout<<arr1[i]<<" ";
    }
    cout<<endl;
    sort(arr2.rbegin(),arr2.rend());
    cout<<arr2.size()<<endl;
    for(int i=0;i<arr2.size();i++){
      cout<<arr2[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
