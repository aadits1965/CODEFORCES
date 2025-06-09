#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n,count=0;
  cin>>n;
  int arr[5] = {100, 20, 10, 5, 1};
    for (int i=0;i<5;i++) {
      count = count + n/arr[i];
      n=n%arr[i];
      if(n==0){
        break;
      }       
    }
  cout<<count<<endl;
  return 0;
}