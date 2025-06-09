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

bool containsSeven(int num) {
  string numStr = to_string(num);
  return numStr.find('7') != string::npos;
}

int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(containsSeven(n)){
      cout<<"0"<<endl;
      continue;
    }
    string s=to_string(n);
    int m=s.length();
    if(s[m-1]=='8'){
      cout<<"1"<<endl;
      continue;
    }
    

  }
  return 0;
}