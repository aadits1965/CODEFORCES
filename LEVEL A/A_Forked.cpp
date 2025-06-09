#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);  
  cout.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int a,b,xk,yk,xq,yq;
    cin>>a>>b>>xk>>yk>>xq>>yq;
    pair<int, int> knight_moves[8] = { {a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a} };
    set<pair<int, int>> set1, set2;
    for (auto move : knight_moves) {
      int new_x = xk + move.first;
      int new_y = yk + move.second;
      set1.insert({new_x, new_y});
    }
    for (auto move : knight_moves) {
      int new_x = xq + move.first;
      int new_y = yq + move.second;
      set2.insert({new_x, new_y});
    }
    int common_count=0;
    for (const auto& p : set1) {
      if (set2.find(p) != set2.end()) {
        common_count++;
      }
    }
    cout<<common_count<<endl;
  }
  return 0;
}