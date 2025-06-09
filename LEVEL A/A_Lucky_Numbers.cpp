#include <iostream>
#include <algorithm>
using namespace std;

int luckiness(int x) {
    int maxDigit = -1;
    int minDigit = 10;
    while (x > 0) {
        int digit = x % 10;
        maxDigit = max(maxDigit, digit);
        minDigit = min(minDigit, digit); 
        x /= 10;
    }
    return maxDigit - minDigit;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int bestLuckiness = -1;
        int bestNumber = l; 
        for (int i = l; i <= r; ++i) {
            int currentLuckiness = luckiness(i); 
            if (currentLuckiness > bestLuckiness) {
                bestLuckiness = currentLuckiness;
                bestNumber = i;
            }
            if(bestLuckiness==9){
              break;
            }
        }
        cout << bestNumber << endl;
    }
    return 0;
}
