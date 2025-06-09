#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s[0]=='9'){
      string k="1";
      for(int i=1;i<n;i++){
        k+='2';
      }
      k+='1';
      s='0'+s;
      string result;
      int carry=0;
      for (int i = n ; i >= 0; i--) {
        int sub = (k[i] - '0') - (s[i] - '0') - carry;
        if (sub < 0) {
          sub += 10;
          carry = 1;
        } 
        else {
          carry = 0;
        }
        result.push_back(sub + '0');
      }
      while (result.size() > 1 && result.back() == '0') {
        result.pop_back();
      }
      reverse(result.begin(), result.end());
      cout<<result<<endl;
    }
    else{
      string result = "";
      for (char c : s) {
        result += (char)('9' - c + '0');
      }
      cout << result << endl;
    }
  }
  return 0;
}