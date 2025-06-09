#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    long long n;
    cin>>n;
    int count=0;
    vector<int>arr;
    if(n%2==0){
      cout<<"-1"<<endl;
      continue;
    }
    while(n!=1){
      if(((n+1)/2)%2!=0){
        arr.push_back(1);
        n=((n+1)/2);
      }
      else{
        arr.push_back(2);
        n=((n-1)/2);
      }
      if(arr.size()>40){
        cout<<"-1"<<endl;
        break;
      }
    }
    if(n==1){
      cout<<arr.size()<<endl;
      reverse(arr.begin(),arr.end());
      for(int i:arr){
        cout << i << " ";
      }
      cout << endl;
    }
  }
  return 0;
}