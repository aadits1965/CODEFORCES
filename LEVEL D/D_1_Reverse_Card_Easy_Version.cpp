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

const int N = 2000001; 
vector<bool> isPrime(N, true);

void sieve() {
  isPrime[0] = isPrime[1] = false;  
  for (int i = 2; i * i < N; i++) {
    if (isPrime[i]) {  
      for (int j = i * i; j < N; j += i) {
        isPrime[j] = false;  
      }
    }
  }
}

bool checkPrime(int num) {
  return isPrime[num];
}


int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    long long count=0;
    for(int i=1;i<=n;i++){
      if(!checkPrime(i) || i==1){
        count++;
        continue;
      }
      if(i==2){
        count++;
        continue;
      }
      for(int j=1;j<=m;j++){
        long long c=i+j;
        long long d=__gcd(i,j);
        if((j*d)>c){
          break;
        }
        if(c%(j*d)==0){
          count++;
        }
      }
    }
    if(n>1 && m>1){
      cout<<count+1<<endl;
    }
    else{
      cout<<count<<endl;
    }
  }
  return 0;
}