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

char forcedLetter(char a, char b) {
  if ((a == 'L' && b == 'I') || (a == 'I' && b == 'L')) return 'T';
  if ((a == 'L' && b == 'T') || (a == 'T' && b == 'L')) return 'I';
  return 'L';
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;    
    int countL=0,countI=0,countT=0;
    FOR(i,n){
      if(s[i]=='L'){
        countL++;
      }
      else if(s[i]=='I'){
        countI++;
      }
      else{
        countT++;
      }
    }
    if (countL == countI && countI == countT) {
      cout << "0" <<endl;
      continue;
    }    
    if (n == 1) {
      cout << "-1"<<endl;
      continue;
    }    
    int mChosen = -1, target = -1;
    for(int m=0;m<=2*n;m++){
      if ((n + m) % 3 != 0){
        continue;
      }
      int targ = (n + m) / 3;
      if (targ >= countL && targ >= countI && targ >= countT) {
        mChosen = m;
        target = targ;
        break;
      }
    }    
    if (mChosen == -1) {
      cout << "-1" <<endl;
      continue;
    }
    int lneeded = target - countL, ineeded = target - countI, tneeded = target - countT;
    vi ops;
    int curLen = n;    
    while (lneeded > 0 || ineeded > 0 || tneeded > 0) {
      bool flag = false;
      for (int i = 0; i < curLen - 1; i++) {
        if (s[i] == s[i + 1]) continue;
        char x = forcedLetter(s[i], s[i + 1]);
        if ((x == 'L' && lneeded > 0) || (x == 'I' && ineeded > 0) || (x == 'T' && tneeded > 0)) {
          s.insert(s.begin() + i + 1, x);
          ops.push_back(i + 1);
          curLen++;
          if (x == 'L'){
            lneeded--;
          }
          else if (x == 'I') ineeded--;
          else tneeded--;
          flag = true;
          break;
        }
      }
      if (!flag) break;
    }  
    int finalL = count(s.begin(), s.end(), 'L');
    int finalI = count(s.begin(), s.end(), 'I');
    int finalT = count(s.begin(), s.end(), 'T');  
    if (finalL == target && finalI == target && finalT == target && ops.size() == mChosen) {
      cout << ops.size() << "\n";
      for (int pos : ops) cout << pos << "\n";
    } 
    else {
      cout << "-1" << "\n";
    }
  }
  return 0;
}