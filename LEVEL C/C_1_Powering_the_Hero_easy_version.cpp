#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n;
    cin>>n;
    long long sum=0;
    vector<int>arr(n);
    vector<int>zeros;
    for(int i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]==0){
        zeros.push_back(i);
      }
    }
    for(int i=0;i<zeros.size();i++){
      auto max_elem_it = max_element(arr.begin(), arr.begin() + zeros[i] + 1);
      sum+=*max_elem_it;
      int d=distance(arr.begin(), max_elem_it);
      arr.erase(arr.begin() + d);
      for (int j = i + 1; j < zeros.size(); j++) {
        zeros[j]--; 
      }
    }
    cout<<sum<<endl;
  }
  return 0;
}