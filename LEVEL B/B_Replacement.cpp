#include<bits/stdc++.h>
using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--){
    int n; cin >> n;
	  string s, t; cin >> s >> t;
	  int cnt0 = count(s.begin(),s.end(), '0'), cnt1 = n - cnt0;
    bool flag=true;
	  for (int i = 0; i < n - 1; i++) {
		  if (cnt0 == 0 || cnt1 == 0) {
		  	cout << "NO" << '\n';
        flag=false;
			  break;
		  }
		  if (t[i] == '1') cnt0--;
		  else cnt1--;
    }
    if(flag){
      cout << "YES" << '\n';
    }
	}
  return 0;
}