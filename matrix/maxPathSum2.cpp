#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// tim max path sum in a matrix from top row to bottom, can only move down, left-down, or right-down
// 1 2 3
// 4 5 6
// 7 8 9
// max path sum = 3->6->9 = 16

int maxPathSum(vector<vector<int>>& matrix, int n, int m) {
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int from_up = matrix[i - 1][j];
            int from_left = (j > 0) ? matrix[i - 1][j - 1] : 0;
            int from_right = (j < m - 1) ? matrix[i - 1][j + 1] : 0;

            matrix[i][j] += max({from_up, from_left, from_right});
        }
    }
    return *max_element(matrix[n - 1].begin(), matrix[n - 1].end());
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> matrix[i][j];

    cout << maxPathSum(matrix, n, m) << endl;
    return 0;
}
