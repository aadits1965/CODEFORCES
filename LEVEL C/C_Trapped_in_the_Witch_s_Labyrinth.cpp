#include <iostream>
#include <vector>
#include <stack>
#include <cstring>
using namespace std;

const int DX[] = {-1, 1, 0, 0};  // Directions: Up, Down, Left, Right
const int DY[] = {0, 0, -1, 1};
const char DIRECTIONS[] = {'U', 'D', 'L', 'R'};

bool outOfBounds(int x, int y, int n, int m) {
    return x < 0 || x >= n || y < 0 || y >= m;
}

// Helper function to check if a pair is in the path
bool isInPath(const vector<pair<int, int>>& path, int nx, int ny) {
    for (auto& p : path) {
        if (p.first == nx && p.second == ny) {
            return true;
        }
    }
    return false;
}

void dfs(int x, int y, vector<vector<char>>& maze, vector<vector<bool>>& visited, 
         vector<vector<bool>>& inCycle, vector<vector<bool>>& escape, int n, int m) {
    stack<pair<int, int>> stack;
    vector<pair<int, int>> path;  // To track the current DFS path

    stack.push({x, y});
    visited[x][y] = true;
    path.push_back({x, y});
    
    while (!stack.empty()) {
        int cx = stack.top().first;
        int cy = stack.top().second;
        stack.pop();

        char direction = maze[cx][cy];
        
        if (direction == '?') {
            // Try all four directions for '?' and check for cycles
            for (int i = 0; i < 4; i++) {
                int nx = cx + DX[i];
                int ny = cy + DY[i];

                if (outOfBounds(nx, ny, n, m)) {
                    escape[cx][cy] = true;
                    continue;  // Escape this path, leads out of bounds
                }

                // If we encounter a cell already in the current path, it's a cycle
                if (visited[nx][ny] && isInPath(path, nx, ny)) {
                    inCycle[nx][ny] = true;
                    break;
                } else {
                    visited[nx][ny] = true;
                    path.push_back({nx, ny});
                    stack.push({nx, ny});
                }
            }
        } else {
            // For fixed directions, continue in the specified direction
            int nx = cx + DX[(direction == 'D') ? 1 : (direction == 'U') ? 0 : (direction == 'L') ? 2 : 3];
            int ny = cy + DY[(direction == 'L') ? 2 : (direction == 'R') ? 3 : (direction == 'D') ? 1 : 0];
            
            if (outOfBounds(nx, ny, n, m)) {
                escape[cx][cy] = true;
                continue;
            }

            if (!visited[nx][ny]) {
                visited[nx][ny] = true;
                stack.push({nx, ny});
                path.push_back({nx, ny});
            } else if (isInPath(path, nx, ny)) {
                inCycle[nx][ny] = true;
            }
        }
    }
}

int main() {
    int t;  // Number of test cases
    cin >> t;

    while (t--) {
        int n, m;  // Dimensions of the maze
        cin >> n >> m;

        vector<vector<char>> maze(n, vector<char>(m));
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        vector<vector<bool>> inCycle(n, vector<bool>(m, false));
        vector<vector<bool>> escape(n, vector<bool>(m, false));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> maze[i][j];
            }
        }

        // Run DFS for each cell that has not been visited
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!visited[i][j]) {
                    dfs(i, j, maze, visited, inCycle, escape, n, m);
                }
            }
        }

        // Count the number of trapped cells
        int trappedCells = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (inCycle[i][j]) {
                    trappedCells++;
                }
            }
        }

        cout << trappedCells << endl;
    }

    return 0;
}

