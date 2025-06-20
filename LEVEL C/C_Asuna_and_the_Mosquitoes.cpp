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
    cin >> n;    
    vi arr(n);
    long long sum = 0;
    int count = 0, maximum = 0;    
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      sum += arr[i];
      if (arr[i] % 2 != 0){
        count++;
      }
      maximum = max(maximum, arr[i]);
    }  
    if (count == 0 || count == n) {
      cout << maximum << endl;
    }
    else{ 
      cout << sum - (count - 1) << endl;
    }
  }
  return 0;
}