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
    vector<int>arr(n);
    for (int i = 0; i < n; ++i){
      cin >> arr[i]; 
    }
    int current=arr[0];
    int count=1;
    for (int i = 0; i < n; ++i){
      current&=arr[i];
      if(current == 0){
			  if(i == n-1){
          break;
        }
			count++;
			current = arr[i + 1];
		  }
	  }
	  if(current != 0){
      count--;
    }
	  count = max(count,1);
	  cout << count << endl;
  }
  return 0;
}