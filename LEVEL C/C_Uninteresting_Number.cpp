#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t; 
  while (t--) {
    string s;
    cin>>s;
    int count2=0,count3=0;
    long long sum=0;
    bool flag=false;
    for(int i=0;i<s.length();i++){
      if(s[i]=='2'){
        count2++;
      }
      else if(s[i]=='3'){
        count3++;
      }
      else{
        sum+=s[i]-'0';
      }
    }
    long long totalsum=(sum+2*count2+3*count3);
    if(totalsum%9==0){
      flag=true;
    }
    else{
      for (int x = 0; x <= count2 && !flag; x++) {
        for (int y = 0; y <= count3 && !flag; y++) {
          if ((totalsum + 2 * x + 6 * y) % 9 == 0) {
            flag = true;
            break;
          }
        }
        if(flag){
          break;
        }
      }
    }
    if(flag){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}