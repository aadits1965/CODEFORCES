#include<bits/stdc++.h>
using namespace std;

void countCase(const string& str, int& upperCount, int& lowerCount) {
    upperCount = 0;
    lowerCount = 0;

    for (char ch : str) {
        if (isupper(ch)) {
            upperCount++;
        } else if (islower(ch)) {
            lowerCount++;
        }
    }
}

int main(){
  string str;
  getline(cin,str);
  int upperCount=0,lowerCount=0;
  countCase(str, upperCount, lowerCount);
  if(lowerCount<upperCount){
    transform(str.begin(), str.end(), str.begin(), [](unsigned char c) {
    return toupper(c);
    });
  }
  else{
    transform(str.begin(), str.end(), str.begin(), [](unsigned char c) {
    return tolower(c);
    });
  }
  cout<<str<<endl;
  return 0;
}