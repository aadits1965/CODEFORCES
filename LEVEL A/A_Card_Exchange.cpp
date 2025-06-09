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
    unordered_map<int, int> frequency;
    for (int i : arr) {
      frequency[i]++;
    }
    int maxFrequency = 0;
    for (const auto& entry : frequency) {
      maxFrequency = max(maxFrequency, entry.second);
    }
    if(maxFrequency>=k){
      cout<<k-1<<endl;
    }
    else{
      cout<<n<<endl;
    }
  }
  return 0;
}