#include <bits/stdc++.h>
using namespace std;

struct TableEntry {
    int i, j, empty_x, empty_y, empty_dist;
};

struct Candidate {
    int dist, x, y, tid, seatindex;
};

struct CandComp {
    bool operator()(const Candidate &a, const Candidate &b) const {
        if (a.dist != b.dist) return a.dist > b.dist;
        if (a.x != b.x) return a.x > b.x;
        return a.y > b.y;
    }
};

vector<TableEntry> gET;

void precomputeET() {
    if (!gET.empty()) return;
    int M = 316;
    vector<TableEntry> temp;

    for (int i = 0; i <= M; i++) {
        for (int j = 0; j <= M - i; j++) {
            TableEntry te = {i, j, i, j, 3 * (i + j) + 2};
            temp.push_back(te);
        }
    }

    sort(temp.begin(), temp.end(), [](const TableEntry &a, const TableEntry &b) {
        if (a.empty_dist != b.empty_dist) return a.empty_dist < b.empty_dist;
        if (a.empty_x != b.empty_x) return a.empty_x < b.empty_x;
        return a.empty_y < b.empty_y;
    });

    gET = move(temp);
}

Candidate getCandidate(int tid, int seatindex) {
    Candidate c;
    c.tid = tid;
    c.seatindex = seatindex;
    const TableEntry &te = gET[tid];
    int base_x = 3 * te.i + 1;
    int base_y = 3 * te.j + 1;
    static int seat_positions[4][2] = {{0, 0}, {0, 1}, {1, 0}, {1, 1}};
    c.x = base_x + seat_positions[seatindex][0];
    c.y = base_y + seat_positions[seatindex][1];
    c.dist = abs(c.x) + abs(c.y);
    return c;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    precomputeET();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> gt(n);
        for (int i = 0; i < n; i++) cin >> gt[i];

        int emptyPtr = 0;
        priority_queue<Candidate, vector<Candidate>, CandComp> partPQ;
        vector<int> occ(gET.size(), 0);
        vector<pair<int, int>> ans;
        ans.reserve(n);

        for (int idx = 0; idx < n; idx++) {
            int typ = gt[idx];
            Candidate chosen;

            if (typ == 0) {
                chosen = getCandidate(emptyPtr, 0);
                occ[emptyPtr] = 1;
                if (occ[emptyPtr] < 4) {
                    Candidate nextCand = getCandidate(emptyPtr, occ[emptyPtr]);
                    partPQ.push(nextCand);
                }
                emptyPtr++;
            } else {
                bool haveEmpty = (emptyPtr < (int)gET.size());
                bool havePart = (!partPQ.empty());

                if (haveEmpty && havePart) {
                    Candidate candEmpty = getCandidate(emptyPtr, 0);
                    Candidate candPart = partPQ.top();

                    if (candEmpty.dist < candPart.dist ||
                        (candEmpty.dist == candPart.dist &&
                         (candEmpty.x < candPart.x || (candEmpty.x == candPart.x && candEmpty.y < candPart.y)))) {
                        chosen = candEmpty;
                        occ[emptyPtr] = 1;
                        if (occ[emptyPtr] < 4) {
                            Candidate nextCand = getCandidate(emptyPtr, occ[emptyPtr]);
                            partPQ.push(nextCand);
                        }
                        emptyPtr++;
                    } else {
                        chosen = candPart;
                        partPQ.pop();
                        int tableId = chosen.tid;
                        occ[tableId]++;
                        if (occ[tableId] < 4) {
                            Candidate nextCand = getCandidate(tableId, occ[tableId]);
                            partPQ.push(nextCand);
                        }
                    }
                } else if (haveEmpty) {
                    chosen = getCandidate(emptyPtr, 0);
                    occ[emptyPtr] = 1;
                    if (occ[emptyPtr] < 4) {
                        Candidate nextCand = getCandidate(emptyPtr, occ[emptyPtr]);
                        partPQ.push(nextCand);
                    }
                    emptyPtr++;
                } else {
                    chosen = partPQ.top();
                    partPQ.pop();
                    int tableId = chosen.tid;
                    occ[tableId]++;
                    if (occ[tableId] < 4) {
                        Candidate nextCand = getCandidate(tableId, occ[tableId]);
                        partPQ.push(nextCand);
                    }
                }
            }
            ans.push_back(make_pair(chosen.x, chosen.y));
        }

        for (size_t i = 0; i < ans.size(); i++) {
            cout << ans[i].first << " " << ans[i].second << "\n";
        }
    }
    return 0;
}