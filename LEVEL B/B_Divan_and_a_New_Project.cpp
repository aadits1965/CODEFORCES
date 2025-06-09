#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    vector<long long>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    vector<pair<long long, long long>> indexedArr;
    for (int i = 0; i < arr.size(); i++) {
      indexedArr.push_back({arr[i], i});
    }
    sort(indexedArr.begin(), indexedArr.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
      return a.first > b.first;
    });
    vector<long long> result(arr.size(), 0); 
    long long group = 1;
    int count = 0;    
    for (int i = 0; i < indexedArr.size(); i++) {
      if (count == 0) {
        result[indexedArr[i].second] = group;
      }
      else {
        result[indexedArr[i].second] = -group;
      }
      count++;
      if (count == 2) {
        count = 0;
        group++; 
      }
    }
    long long sum = 0;
    for (int i = 0; i < result.size(); i++) {
      sum+=2*arr[i]*(abs(result[i]));
    }
    cout<<sum<<endl;
    cout<<"0 ";
    for (int i = 0; i < result.size(); i++) {
      cout << result[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
