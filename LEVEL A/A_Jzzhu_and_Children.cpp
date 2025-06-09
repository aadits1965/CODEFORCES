#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,count=0;
  cin>>n>>m;
  int arr[n];
  vector<int>maxarray;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  queue<int>q;
  for(int i=0;i<n;i++){
    q.push(i);
  }
  int last_child=0;
  while(!q.empty()){
    int index=q.front();
    q.pop();
    arr[index]-=m;
    if(arr[index]>0){
      q.push(index);
    } 
    else{
      last_child=index+1;
    }
  }
  cout<<last_child<< endl;
  return 0;
}