#include <iostream>
#include <vector>

void setMatrixZeroes(std::vector<std::vector<int>>& matrix) {
    bool data[matrix.size()][matrix[0].size()];
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[0].size(); ++j) {
            data[i][j] = false;
            if (matrix[i][j] == 0) {
                data[i][j] = true;
            }
        }
    }
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[0].size(); ++j) {
            if (data[i][j] == true) {
                for (int k = 0; k < matrix.size(); ++k) {
                    matrix[k][j] = 0;
                }
                for (int k = 0; k < matrix[0].size(); ++k) {
                    matrix[i][k] = 0;
                }
            }
        }
    }
}

void print(const std::vector<std::vector<int>>& matrix) {
    for (int i = 0 ; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[0].size(); ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<std::vector<int>> matrix {
        {1,   2,   3},
        {4,   0,   6}, 
        {7,   8,   9}
    };
    setMatrixZeroes(matrix);
    print(matrix);
    return 0;
}