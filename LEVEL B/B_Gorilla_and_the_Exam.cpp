#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    map<int, int> freqMap;
    for (int num : arr) {
      freqMap[num]++;
    }
    vector<int> freqVec;
    for (const auto& entry : freqMap) {
      freqVec.push_back(entry.second);
    }
    sort(freqVec.begin(), freqVec.end());
    if(n-freqVec[freqVec.size()-1]<=m){
      cout<<"1"<<endl;
    }
    else{
      int j=0;
      bool flag=false;
      for(int i=0;i<freqVec.size()-1;i++){
        if(m>=freqVec[i]){
          m=m-freqVec[i];
          j=i;
        }
        else{
          j=i;
          flag=true;
          break;
        }
      }
      if(flag){
        cout<<freqVec.size()-j<<endl;
      }
      else{
        cout<<freqVec.size()-j-1<<endl;
      }
    }
  }
  return 0;
}
