#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define all(x) x.begin(), x.end()

int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    int i = 0, j = 0, count = 0;
    while (i < n && j < m) {
      if (a[i] == b[j]) {
        count++;
        i++;
      }
      j++;
    }

    cout << count << endl;
  }
  return 0;
}
