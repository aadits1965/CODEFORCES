#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n,count=0;
    cin >> n;
    string numberstr = to_string(n);
    for (char digit : numberstr) {
      if (digit == '4' || digit == '7') {
        count++;
      }
    }
    if(count==4 || count==7){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
    return 0;
}
