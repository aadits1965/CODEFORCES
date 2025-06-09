#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    long long n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    unordered_map<int, int> frequencyMap;
    for (int i : arr) {
      frequencyMap[i]++;
    }
    unordered_set<int>unique(arr.begin(),arr.end());
    if(unique.size()==n){
      if(n%2==0){
        cout<<n<<endl;
      }
      else{
        cout<<n+1<<endl;
      }
    }
    else if(unique.size()==1){
      if(n==1){
        cout<<"2"<<endl;
      }
      else{
        cout<<"1"<<endl;
      }
    }
    else{
      int count=0;
      vector<int> frequencies;
      for (const auto& entry : frequencyMap) {
        frequencies.push_back(entry.second);
      }
      sort(frequencies.begin(), frequencies.end());
      for (int i = 0; i < frequencies.size(); i++) {
        if(frequencies[i]==1 && frequencies[i+1]==1){
          count+=2;
          i++;
        }
        else if(frequencies[i]==1 && frequencies[i+1]!=1){
          count+=2;
        }
        else{
          count++;
        }
      }
      cout<<count<<endl;
    }
  }
  return 0;
}