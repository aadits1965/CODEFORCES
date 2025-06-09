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

int count_divisible_by_two(int x) {
    int count = 0;
    while (x % 2 == 0) {
        x /= 2;
        count++;
    }
    return count;
}


int main(){
  fastIO;
  int t;
  cin>>t;
  while(t--){
    int n; // number of integers
        cin >> n;
        vector<int> a(n);
        
        // Read the array of integers
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> even_divisions;

        // Process the numbers and count how many times each even number can be divided by 2
        for (int i = 0; i < n; ++i) {
            if (a[i] % 2 == 0) {
                even_divisions.push_back(count_divisible_by_two(a[i]));
            }
        }

        // Sort the even numbers based on the number of divisions (descending)
        sort(even_divisions.rbegin(), even_divisions.rend());

        // Maximum number of points is the number of divisions of even numbers
        int points = 0;
        for (int div_count : even_divisions) {
            points += div_count;
        }

        // Output the result for this test case
        cout << points << endl;
  }
  return 0;
}