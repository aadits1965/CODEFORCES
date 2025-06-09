#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while (t--){
    long long n;
    cin>>n;
    cin.ignore();
    string str;
    getline(cin,str);
    char firstChar = str.front();  
    char lastChar = str.back();
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    string result = reversedStr + str;
    if (firstChar < lastChar) {
      if(n%2==0){
        cout<<str<<endl;
      }
      else{
        cout<<result<<endl;
      }
    } 
    else if(firstChar>lastChar) {
      if(n%2!=0){
        cout<<str<<endl;
      }
      else{
        cout<<result<<endl;
      }
    }
    else{
      if(str<reversedStr){
        if(n%2==0){
          cout<<str<<endl;
        }
        else{
          cout<<result<<endl;
        }
      }
      else if(str==reversedStr){
        cout<<str<<endl;
      }
      else{
        if(n%2!=0){
          cout<<str<<endl;
        }
        else{
          cout<<result<<endl;
        }
      }
    }
  }
  return 0;
}