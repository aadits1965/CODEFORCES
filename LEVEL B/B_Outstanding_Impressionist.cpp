#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++){
      for(int j=0;j<2;j++){
        cin>>arr[i][j];
      }
    }
    vector<int>forbiddenvalues;
    for(int i=0;i<n;i++){
      if(arr[i][0]==arr[i][1]){
        forbiddenvalues.push_back(arr[i][0]);
      }
    }
    set<int> set1(forbiddenvalues.begin(), forbiddenvalues.end());
    vector<int>result;
    for(int i=0;i<n;i++){
      vector<int>values;
      for(int j=arr[i][0];j<=arr[i][1];j++){
        values.push_back(j);
      }
      set<int>set2(values.begin(),values.end());
      if (set2<=set1) {
        result.push_back(0);
      } 
      else {
        result.push_back(1);
      }
    }
    for(int i=0;i<n;i++){
      cout<<result[i];
    }
    cout<<endl;
  } 
  return 0;
}
