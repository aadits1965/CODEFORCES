#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    int n,count=0,a=0,b=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    unordered_map<int, int> freq_map;
    for (int i : arr) {
      freq_map[i]++;
    }
    for (int i : arr) {
      if(freq_map[i]>1){
        a=i;
        break;
      }
    }
    for (int i : arr) {
      if(freq_map[i]>1 && i!=a){
        b=i;
        break;
      }
    }
    vector<int> frequencies;
    for (const auto& pair : freq_map) {
      frequencies.push_back(pair.second); 
    }
    unordered_set<int>unique(arr.begin(),arr.end());
    unordered_set<int>uniquefreq(frequencies.begin(),frequencies.end());
    if(unique.size()==1){
      cout<<"-1"<<endl;
    }
    else if(unique.size()==2 && n<4){
      cout<<"-1"<<endl;
    }
    else if(unique.size()==2 && (frequencies[0]==1 || frequencies[1]==1)){
      cout<<"-1"<<endl;
    }
    else{
      for (const auto& pair : freq_map) {
        if (pair.second >= 2) {
          count++;
        }
      }
      int maxFrequency = 0;
      for (const auto& pair : freq_map) {
        maxFrequency = max(maxFrequency, pair.second);
      }
      if(maxFrequency==1){
        cout<<"-1"<<endl;
      }
      else if(maxFrequency==2 && count==1){
        cout<<"-1"<<endl;
      }
      else if(uniquefreq.size()==2  && uniquefreq.find(1) != uniquefreq.end() && count==1){
        cout<<"-1"<<endl;
      }
      else{
        vector<int>ans(n);
        for(int i=0;i<n;i++){
          ans[i]=1;
        }
        for(int i=0;i<n;i++){
          if(arr[i]==a){
            ans[i]=2;
            break;
          }
        }
        for(int i=0;i<n;i++){
          if(arr[i]==b){
            ans[i]=3;
            break;
          }
        }
        for(int i=0;i<n;i++){
          cout<<ans[i]<<" ";
        }
        cout<<endl;
      }
    }
  }
  return 0;
}