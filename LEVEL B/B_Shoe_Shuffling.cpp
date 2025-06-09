#include <bits/stdc++.h>
using namespace std;
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main(){
  io;  
  int t;
  cin >> t;  
  while (t--){  
    int n;
    cin >> n; 
    vector<int>freq(n); 
    for (int i = 0; i < n; ++i){
      cin >> freq[i]; 
    }
    vector<int>result(n);  
    iota(result.begin(), result.end(), 1); 
    int l = 0, r = 0;
    bool isValid = true; 
    while (r < n){
      while (r < n - 1 && freq[r] == freq[r + 1]){
        r++;
      }
      if (l == r){
        isValid = false;
        break;
      }
      else{
        rotate(result.begin() + l, result.begin() + r, result.begin() + r + 1);
      }
      l = r + 1;
      r++;
    }
    if (isValid){
      for (const auto& i : result){
        cout << i << " ";
      }
      cout << endl;
    }
    else{
      cout << -1 << endl;
    }
  }
  return 0;
}

