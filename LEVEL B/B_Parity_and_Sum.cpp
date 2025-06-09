#include<bits/stdc++.h>
using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--){
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int>even;
    vector<int>odd;
    for(int i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]%2==0){
        even.push_back(arr[i]);
      }
      else{
        odd.push_back(arr[i]);
      }
    }
    sort(even.rbegin(),even.rend());
    sort(odd.rbegin(),odd.rend());
    if(even.size()==0 || even.size()==n){
      cout<<"0"<<endl;
      continue;
    }
    if(even[0]<odd[0]){
      cout<<even.size()<<endl;
    }
    else{
      long long sum=0;
      long long a=odd[0];
      bool flag=false;
      for(int i=even.size()-1;i>=0;i--){
        if(even[i]<a){
          a+=even[i];
        }
        else{
          flag=true;
        }
      }
      if(flag){
        cout<<even.size()+1<<endl;
      }
      else{
        cout<<even.size()<<endl;
      }
    }
	}
  return 0;
}