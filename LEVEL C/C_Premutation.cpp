#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n;
    cin>>n;
    int arr[n][n-1];
    for(int i=0;i<n;i++){
      for(int j=0;j<n-1;j++){
        cin>>arr[i][j];
      }
    }
    if(n%2!=0){
      vector<int>ans_final(n-1);
      int sum=0;
      for(int j=0;j<n-1;j++){
        unordered_map<int, int> freq_map;
        for (int i = 0; i < n; i++) {
          freq_map[arr[i][j]]++;
        }
        int maxFreqElement = arr[0][j];
        int maxFreq = freq_map[maxFreqElement];
        for (auto& p : freq_map) {
          if (p.second > maxFreq) {
            maxFreq = p.second;
            maxFreqElement = p.first;
          }
        }
        ans_final[j] = maxFreqElement;
      }
      for(int i=0;i<n-1;i++){
        sum+=ans_final[i];
      }
      int d=n*(n+1)/2-sum;
      for(int i=0;i<(n-1)/2;i++){
        cout<<ans_final[i]<<" ";
      }
      cout<<d<<" ";
      for(int i=(n-1)/2;i<n-1;i++){
        cout<<ans_final[i]<<" ";
      }
      cout<<endl;
    }
    else{
      vector<int>ans_final(n-2);
      for(int j=0;j<(n-2)/2;j++){
        unordered_map<int, int> freq_map;
        for (int i = 0; i < n; i++) {
          freq_map[arr[i][j]]++;
        }
        int maxFreqElement = arr[0][j];
        int maxFreq = freq_map[maxFreqElement];
        for (auto& p : freq_map) {
          if (p.second > maxFreq) {
            maxFreq = p.second;
            maxFreqElement = p.first;
          }
        }
        ans_final[j] = maxFreqElement;
      }
      for(int j=(n-2)/2+1;j<(n-1);j++){
        unordered_map<int, int> freq_map;
        for (int i = 0; i < n; i++) {
          freq_map[arr[i][j]]++;
        }
        int maxFreqElement = arr[0][j];
        int maxFreq = freq_map[maxFreqElement];
        for (auto& p : freq_map) {
          if (p.second > maxFreq) {
            maxFreq = p.second;
            maxFreqElement = p.first;
          }
        }
        ans_final[j-1] = maxFreqElement;
      }
      vector<int>ans3(n);
      int first=0,second=0,count=0;
      for (int i = 0; i < n; i++) {
        ans3[i]=arr[i][(n-2)/2];
      }
      unordered_set<int>unique(ans3.begin(),ans3.end());
      auto it = unique.begin();
      first = *it; 
      ++it;
      second = *it;
      for (int i = 0; i < n; i++) {
        if(first==arr[i][(n-2)/2-1]){
          count++;
          break;
        }
      }
      for(int i=0;i<(n-2)/2;i++){
        cout<<ans_final[i]<<" ";
      }
      if(count==0){
        cout<<second<<" "<<first<<" ";
      }
      else{
        cout<<first<<" "<<second<<" ";
      }
      for(int i=(n-2)/2;i<n-2;i++){
        cout<<ans_final[i]<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}