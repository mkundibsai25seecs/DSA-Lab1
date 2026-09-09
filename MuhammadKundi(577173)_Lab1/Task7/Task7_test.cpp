#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;
using Matrix = vector<vector<int>>;

Matrix multiplyStandard(const Matrix& A, const Matrix& B);
Matrix multiplyStrassen(const Matrix& A, const Matrix& B);

Matrix generateRandomMatrix(int n) {
    Matrix M(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            M[i][j] = rand() % 10;
    return M;
}

int main() {
    srand(time(0));

    // Test 1: 2x2 matrix multiplication
    Matrix A2 = {{1, 2}, {3, 4}};
    Matrix B2 = {{5, 6}, {7, 8}};
    cout << "2x2 Multiplication: " << (multiplyStrassen(A2, B2) == multiplyStandard(A2, B2) ? "PASS" : "FAIL") << endl;

    // Test 2: 4x4 matrix multiplication
    Matrix A4 = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 1, 2, 3},
        {4, 5, 6, 7}
    };
    Matrix B4 = {
        {8, 7, 6, 5},
        {4, 3, 2, 1},
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };
    cout << "4x4 Multiplication: " << (multiplyStrassen(A4, B4) == multiplyStandard(A4, B4) ? "PASS" : "FAIL") << endl;

    // Test 3: Random values comparison with naive multiplication
    Matrix A_rand = generateRandomMatrix(4);
    Matrix B_rand = generateRandomMatrix(4);
    cout << "Random Matrix Comparison: " << (multiplyStrassen(A_rand, B_rand) == multiplyStandard(A_rand, B_rand) ? "PASS" : "FAIL") << endl;

    return 0;
}