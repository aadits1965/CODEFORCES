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
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<vector<int>> arr(n + 1, vector<int>(n + 1));
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> arr[i][j];
        }
    }
    
    vector<int> rowCounts(n);

        for(int i = 1; i <= n; i++){
            int curr = 0;
            for(int j = n; j >= 1; j--){
                if(arr[i][j] != 1) break;
                curr++;
            }
            rowCounts[i-1] = curr;
        }

        sort(rowCounts.begin(), rowCounts.end());

        int curr = 1;
        for(int i = 0; i < n; i++){
            if(rowCounts[i] >= curr){
                curr++;
                n--;
            }
        }

        cout << curr << endl;
  }
  return 0;
}
