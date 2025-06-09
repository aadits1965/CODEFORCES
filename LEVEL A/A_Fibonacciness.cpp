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
    long long a1, a2, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;
    long long a31 = a1 + a2;
    long long fibonacciness1 = 0;    
    if (a31 == a1 + a2) fibonacciness1++;  
    if (a4 == a2 + a31) fibonacciness1++; 
    if (a5 == a31 + a4) fibonacciness1++; 
    long long a32 = a4 - a2;
    long long fibonacciness2 = 0;    
    if (a32 == a1 + a2) fibonacciness2++;  
    if (a4 == a2 + a32) fibonacciness2++; 
    if (a5 == a32 + a4) fibonacciness2++; 
    long long a33 = a5 - a4;
    long long fibonacciness3 = 0;    
    if (a33 == a1 + a2) fibonacciness3++;  
    if (a4 == a2 + a33) fibonacciness3++; 
    if (a5 == a33 + a4) fibonacciness3++;  
    cout << max(fibonacciness1,max(fibonacciness2,fibonacciness3)) << endl;
  }
  return 0;
}