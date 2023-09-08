#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> read_matrix(int rows, int cols) {
    vector<vector<int>> matrix(rows, vector<int>(cols));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

bool are_matrices_equal(const vector<vector<int>>& matrix_a, const vector<vector<int>>& matrix_b) {
    int m = matrix_a.size();
    int n = matrix_a[0].size();
    
    if (matrix_b.size() != m || matrix_b[0].size() != n) {
        return false;
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix_a[i][j] != matrix_b[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> matrix_a = read_matrix(m, n);

    vector<vector<int>> matrix_b = read_matrix(m, n);

    if (are_matrices_equal(matrix_a, matrix_b)) {
        cout << "Equal" << endl;
    } else {
        cout << "Not Equal" << endl;
    }

    return 0;
}

//Sushant