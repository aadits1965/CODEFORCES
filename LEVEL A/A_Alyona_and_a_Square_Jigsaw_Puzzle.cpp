#include<bits/stdc++.h>
using namespace std;

bool isSquareOfOddNumber(int x) {
  int y = static_cast<int>(sqrt(x));
  if (y*y == x && y % 2 == 1) {
    return true;
  }
  return false;
}

int main(){
  int t;
  cin >> t;
  while (t--){
    long long n,sum=0,count=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n;i++){
      sum+=arr[i];
      if(isSquareOfOddNumber(sum)){
        count++;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}