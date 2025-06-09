#include <bits/stdc++.h>
using namespace std;

int calculate_inversion_parity(const vector<int>& arr) {
    int n = arr.size();
    vector<int> sorted_arr = arr;
    map<int, int> rank;
    sort(sorted_arr.begin(), sorted_arr.end());

    for (int i = 0; i < n; ++i) {
        rank[sorted_arr[i]] = i;
    }

    vector<int> fenwick_tree(n + 1, 0);
    int parity = 0;

    // Fenwick Tree (Binary Indexed Tree) operations
    auto update_tree = [&](int index) {
        for (++index; index <= n; index += index & -index) {
            fenwick_tree[index]++;
        }
    };

    auto query_tree = [&](int index) {
        int count = 0;
        for (++index; index > 0; index -= index & -index) {
            count += fenwick_tree[index];
        }
        return count;
    };

    // Calculating the number of inversions in the array
    for (int i = n - 1; i >= 0; --i) {
        int x = rank[arr[i]];
        parity ^= query_tree(x - 1) % 2;
        update_tree(x);
    }

    return parity;
}

vector<int> merge_sorted_lists(const vector<int>& list1, const vector<int>& list2) {
    int size1 = list1.size(), size2 = list2.size();
    vector<int> result(size1 + size2);
    int index1 = 0, index2 = 0;

    for (int i = 0; i < size1 + size2; ++i) {
        if (i % 2 == 0) {
            result[i] = list1[index1++];
        } else {
            result[i] = list2[index2++];
        }
    }

    return result;
}

void process_test_case() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> even, odd;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (i % 2 == 0) {
            even.push_back(a[i]);
        } else {
            odd.push_back(a[i]);
        }
    }

    vector<int> sorted_even = even, sorted_odd = odd;
    sort(sorted_even.begin(), sorted_even.end());
    sort(sorted_odd.begin(), sorted_odd.end());

    int even_parity = calculate_inversion_parity(even);
    int odd_parity = calculate_inversion_parity(odd);

    vector<int> result;

    if (even_parity == odd_parity) {
        result = merge_sorted_lists(sorted_even, sorted_odd);
    } else {
        vector<int> candidate1 = sorted_even, candidate2 = sorted_odd;

        // Swap last two elements if possible to adjust the parity
        if (candidate1.size() >= 2) {
            swap(candidate1[candidate1.size() - 1], candidate1[candidate1.size() - 2]);
        }
        if (candidate2.size() >= 2) {
            swap(candidate2[candidate2.size() - 1], candidate2[candidate2.size() - 2]);
        }

        vector<int> option1 = merge_sorted_lists(candidate1, sorted_odd);
        vector<int> option2 = merge_sorted_lists(sorted_even, candidate2);

        // Choose the lexicographically smaller option
        result = min(option1, option2);
    }

    for (int x : result) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        process_test_case();
    }

    return 0;
}
