#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,count=0;
  cin >> t;
  vector<int>arr(t);
  for(int i=0;i<t;i++){
    cin>>arr[i];
  }
  sort(arr.begin(),arr.end());
  if(t==1){
    cout<<"0"<<endl;
    cout<<arr[0]<<endl;
  }
  else if(t==2){
    cout<<"0"<<endl;
    cout<<arr[0]<<" "<<arr[1]<<endl;
  }
  else{
    if(t%2!=0){
      int d=(t-1)/2;
      cout<<d<<endl;
      int i=0;
      int j=d;
      while(true){
        cout<<arr[j]<<" "<<arr[i]<<" ";
        i++;
        j++;
        count+=2;
        if(count==t-1){
          cout<<arr[t-1]<<endl;
          break;
        }
      }
    }
    else{
      int d=(t-2)/2;
      cout<<d<<endl;
      int i=0;
      int j=d;
      while(true){
        cout<<arr[j]<<" "<<arr[i]<<" ";
        i++;
        j++;
        count+=2;
        if(count==t-2){
          cout<<arr[t-2]<<" "<<arr[t-1]<<endl;
          break;
        }
      }
    }
  }
  return 0;
}