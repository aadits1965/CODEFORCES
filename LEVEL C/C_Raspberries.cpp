#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m,count=0,count1=0,count2=0,count3=0;
    cin>>n>>m;
    bool flag=true;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    if(m==2){
      for(int i=0;i<n;i++){
        if(arr[i]%2==0){
          cout<<"0"<<endl;
          flag=false;
          break;
        }
      }
      if(flag){
        cout<<"1"<<endl;
      }
    }
    else if(m==3){
      for(int i=0;i<n;i++){
        if(arr[i]%3==0){
          cout<<"0"<<endl;
          flag=false;
          break;
        }
      }
      if(flag){
        for(int i=0;i<n;i++){
          if(arr[i]%3==2){
            cout<<"1"<<endl;
            flag=false;
            break;
          }
        }
      }
      if(flag){
        cout<<"2"<<endl;
      }
    }
    else if(m==4){
      for(int i=0;i<n;i++){
        if(arr[i]%4==0){
          count++;
        }
        if(arr[i]%4==3){
          count1++;
        }
        if(arr[i]%4==2){
          count2++;
        }
        if(arr[i]%4==1){
          count3++;
        }
      }
      if(count>0){
        cout<<"0"<<endl;
      }
      else if(count2>1){
        cout<<"0"<<endl;
      }
      else if(count1>0){
        cout<<"1"<<endl;
      }
      else if(count2>=1 && count3>=1){
        cout<<"1"<<endl;
      }
      else if(n==1 && arr[0]%4==1){
        cout<<"3"<<endl;
      }
      else{
        cout<<"2"<<endl;
      }

    }
    else{
      for(int i=0;i<n;i++){
        if(arr[i]%5==0){
          cout<<"0"<<endl;
          flag=false;
          break;
        }
      }
      if(flag){
        for(int i=0;i<n;i++){
          if(arr[i]%5==4){
            cout<<"1"<<endl;
            flag=false;
            break;
          }
        }
      }
      if(flag){
        for(int i=0;i<n;i++){
          if(arr[i]%5==3){
            cout<<"2"<<endl;
            flag=false;
            break;
          }
        }
      }
      if(flag){
        for(int i=0;i<n;i++){
          if(arr[i]%5==2){
            cout<<"3"<<endl;
            flag=false;
            break;
          }
        }
      }
      if(flag){
        cout<<"4"<<endl;
      }
    }
  }
  return 0;
}