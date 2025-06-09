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
    map<long long, vector<long long>> winPointsMap;
    for (long long i = 0; i < n; ++i) {
      long long wins, points;  
      cin >> wins >> points;
      winPointsMap[wins].push_back(points);
    }
    map<long long, long long> totalPointsMap;
    long long totalPoints = 0;
    for (auto& entry : winPointsMap) {
      long long wins = entry.first;
      vector<long long>& points = entry.second;
      sort(points.begin(), points.end(), greater<long long>());
      for (long long i = 0; i < min(wins, (long long)points.size()); ++i) {
        totalPoints += points[i];
      }
    }
    cout<<totalPoints<<endl;
  }
  return 0;
}