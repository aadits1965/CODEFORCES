#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    char arr[10];
    for(int i=0;i<10;i++){
      cin>>arr[i];
    }
    char arrtwo[10]={'c','o','d','e','f','o','r','c','e','s'};
    int count=0;
    for(int i=0;i<10;i++){
      if(arr[i]!=arrtwo[i]){
        count++;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}