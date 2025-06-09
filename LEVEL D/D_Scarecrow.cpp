#include <bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

bool canReachInTime(int time, int n, int k, int l, const vector<int>& scarecrows) {
    int current_position = 0;
    for (int i = 0; i < n; i++) {
        int max_move = scarecrows[i] + time;  // scarecrow can move up to `time` distance from its initial position
        if (current_position + k > max_move) {
            current_position = max_move + k;
        }
    }
    return current_position >= l;
}

int main() {
    fastIO;
    int t;
    cin >> t;
    
    while (t--) {
        int n, k, l;
        cin >> n >> k >> l;
        vector<int> scarecrows(n);
        for (int i = 0; i < n; i++) {
            cin >> scarecrows[i];
        }

        // Binary search for the minimum time
        int left = 0, right = l;
        int result = 2 * l;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (canReachInTime(mid, n, k, l, scarecrows)) {
                result = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        
        cout << 2 * result << endl;
    }
    
    return 0;
}
