#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
  if (num <= 1) return false; 
  if (num == 2) return true;  
  if (num % 2 == 0) return false;  
  for (int i = 3; i <= sqrt(num); i += 2) {
    if (num % i == 0) {
      return false;  
    }
  }
  return true;  
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  int t;
  cin>>t;
  while(t--){
    int n,m=0;
    cin>>n;
    for(int j=1;j<=n-1;j++){
      for(int i=1;i<=n-1;i++){
        cout<<"1 ";
      }
      int k=1;
      while(true){
        if(isPrime(n-1+k) && !isPrime(k)){
          cout<<k<<endl;
          m=k;
          break;
        }
        else{
          k++;
        }
      }
    }
    for(int i=1;i<=n-1;i++){
      cout<<m<<" ";
    }
    int k=1;
    while(true){
      if(isPrime(m*(n-1)+k) && !isPrime(k)){
        cout<<k<<endl;
        break;
      }
      else{
        k++;
      }
    }
  }
  return 0;
}