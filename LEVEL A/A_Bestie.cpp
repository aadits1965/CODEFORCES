#include <bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int gcd(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b; 
    a = temp;  
  }
  return a;
}

int main(){
  io;  
  int t;
  cin >> t;  
  while (t--){  
    long long n;
    cin >> n; 
    vector<long long>arr(n); 
    for (int i = 0; i < n; ++i){
      cin >> arr[i]; 
    }
    if(n==1){
      if (arr[0] == 1) {
        cout << "0" << endl;
      } 
      else {
        cout << "1" << endl;  
      }
    }
    else{
      int value=arr[0];
      for (int i = 0; i < n; ++i) {
        value=gcd(arr[i],value);
      }
      if(value==1){
        cout<<"0"<<endl;
      }
      else{
        long long d=arr[n-1];
        arr[n-1]=gcd(arr[n-1],n); 
        value=arr[0];
        for (int i = 0; i < n; ++i) {
          value=gcd(arr[i],value);
        }
        if(value==1){
          cout<<"1"<<endl;
        }
        else{
          arr[n-1]=d;
          arr[n-2]=gcd(arr[n-2],n-1); 
          value=arr[0];
          for (int i = 0; i < n; ++i) {
            value=gcd(arr[i],value);
          }
          if(value==1){
            cout<<"2"<<endl;
          }
          else{
            cout<<"3"<<endl;
          }
        }
      }
    }
  }
  return 0;
}