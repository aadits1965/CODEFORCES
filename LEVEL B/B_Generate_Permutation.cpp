#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>arrodd(n/2+1);
    vector<int>arreven(n/2);
    if(n%2==0){
      cout<<"-1"<<endl;
    }
    else{
      for(int i=0;i<n/2+1;i++){
        arrodd[i]=2*i+1;
      }
      reverse(arrodd.begin(), arrodd.end());
      for(int i=0;i<n/2;i++){
        arreven[i]=2*(i+1);
      }
      vector<int>joined_array(arrodd);
      joined_array.insert(joined_array.end(),arreven.begin(),arreven.end());
      for(int i=0;i<n;i++){
        cout<<joined_array[i]<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}