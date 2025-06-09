#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    long long n,a,b,consecutive_zeros=0;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int count = 0; 
    int i = 0;  
    while(i<n) {
      if (s[i] == '0') {
        consecutive_zeros++;
        if(consecutive_zeros>=a){
          count++;
          i+=b-1;
          consecutive_zeros=0;
        }
      } 
      else {
        consecutive_zeros = 0; 
      }
      i++;
    }
    cout << count << endl;
  }
  return 0;
} 