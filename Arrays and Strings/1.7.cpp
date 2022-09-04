#include <iostream>
#include <vector>

std::vector<std::vector<int>> rotateMatrixBy90(std::vector<std::vector<int>> matrix) {
    std::vector<std::vector<int>> result;
    result.resize(matrix.size());
    for (int i = 0; i < result.size(); ++i) {
        result[i].resize(matrix[0].size());
    }
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[0].size(); ++j) {
            result[i][j] = matrix[j][matrix.size() -1 - i];
        }
    }
    return result;
}

void print(const std::vector<std::vector<int>>& matrix) {
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[0].size(); ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<std::vector<int>> vec = {
            {1,  2,  3},
            {4,  5,  6},
            {7,  8,  9}
    };
    std::vector<std::vector<int>> matrix = rotateMatrixBy90(vec);
    print(matrix);
    return 0;
}