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

bool isPerfectSquare(long long n) {
  if (n < 0) return false;  
  long long root = sqrt(n); 
  return root * root == n || (root + 1) * (root + 1) == n;
}

int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int num = stoi(s);
    if(isPerfectSquare(num)){
      cout<<0<<" "<<sqrt(num)<<endl;
    }
    else{
      cout<<"-1"<<endl;
    }
  }
  return 0;
}