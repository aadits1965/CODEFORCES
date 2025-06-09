#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    long long n;
    cin>>n;
    vector<int>arr;
    while(n>0){
      int digit=n%10;
      arr.push_back(digit);
      n=n/10;
    }
    int count=0;
    for(int i=arr.size()-1;i>=0;i--){
      if(arr[i]!=0){
        count++;
      }
    }
    cout<<count<<endl;
    for(int i=arr.size()-1;i>=0;i--){
      if(arr[i]!=0){
        cout<<arr[i]*pow(10,i)<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}