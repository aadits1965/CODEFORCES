#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    long long n,sum=0;
    cin>>n;
    vector<long long>ans;
    vector<long long>ans2;
    while(n--){
      long long m;
      cin>>m;
      vector<long long>arr(m);
      for(long long i=0;i<m;i++){
        cin>>arr[i];
      }
      sort(arr.begin(),arr.end());
      if(arr.size()>1){
        ans.push_back(arr[1]);
      }
      ans2.push_back(arr[0]);
    }
    sort(ans.begin(),ans.end());
    sort(ans2.begin(),ans2.end());
    long long d=ans[0];
    long long e=ans2[0];
    for(long long i=0;i<ans.size();i++){
      sum+=ans[i];
    }
    cout<<sum-d+e<<endl;
  }
  return 0;
}